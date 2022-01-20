#pragma once
#include<iostream>
#include<functional>
#include "delete.h"
using namespace std;

namespace cp5{
    template<typename T>
    class SharedPointer;

    template<typename T>
    auto swap(SharedPointer<T>& lhs, SharedPointer<T>& rhs){
        using std::swap;
        swap(lhs.ptr, rhs.ptr)
        
    }

    // shared_ptr定义
    template<typename T>
    class SharedPointer{
        private:
            T* ptr;
            size_t* ref_count;
            //储存可调用函数的类模板，可调用函数返回void 参数是T*
            function<void(T*)> deleter;
            auto decrement_and_destroy(){
                if(ptr&& 0 == --*ref_count){ //只剩下此对象一个就要删掉，不然只减少一个count的一个值即可
                    delete ref_count;
                    deleter(ptr);
                }else if(!ptr){
                    delete ref_count;
                }
                ref_count = nullptr;
                ptr = nullptr;
            }
        public:
            // 默认构造函数
            SharedPointer():
            ptr(nullptr),ref_count{new std::size_t(1)},deleter{cp5::Delete{}}
            {}

            explicit SharedPointer(T* raw_ptr):
            ptr{raw_ptr},ref_count{new size_t(1)},deleter{cp5::Delete{}}

            // 拷贝构造
            SharedPointer(const SharedPointer& other): 
            ptr{other.ptr},ref_count{other.ref_count},deleter{other.deleter}
            {
                ++*ref_count;
            }

            //move constructor
            SharedPointer(SharedPointer&& other) noexcept
            : ptr{other.ptr},ref_count{other.ref_count},deleter{otehr.deleter}
            {
                other.ptr = nullptr;
                other.ref_count = nullptr;
            }

            // 拷贝赋值
            SharedPointer& operator=(const SharedPointer& rhs){
                ++*ref_count; //递增rhs的计算器
                decrement_and_destroy();//递减原来的计数器
                ptr = rhs.ptr;ref_count = rhs.ref_count;deleter = rhs.deleter;  
                return *this;
            }

            //移动赋值
            SharedPointer& operator=(SharedPointer&& rhs) noexcept{
                cp5::swap(*this,rhs);
                rhs.decrement_and_destroy();//rhs计数器减一
                return *this;
            }

            // 提供一个本类型到bool的隐式转换，不允许使用参数。
            // 类型转换运算符 operator type()
            operator bool() const{
                return ptr ? true : false;
            }

            T& operator*() const{
                return *ptr;
            }

            auto use_count() const{
                return *ref_count;
            }

            auto get() const{
                return ptr; 
            }

            auto unique() const{
                return 1==*ref_count;
            }
            auto swap(SharedPointer& rhs){
                ::swap(*this,rhs);
            }

            auto reset(T* pointer){
                if(ptr!=pointer){
                    decrement_and_destroy();
                    ptr = pointer;
                    ref_count = new size_t(1);
                }
            }

		//  Reset with raw pointer and deleter
            auto reset(T *pointer, const std::function<void(T*)>& d)
            {
                reset(pointer);
                deleter = d;
            }

        // 析构函数
            ~SharedPointer()
            {
                decrement_and_destroy();
            }

    };
}