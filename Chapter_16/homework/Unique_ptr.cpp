#ifndef UNIQUE_POINTER_H
#define UNIQUE_POINTER_H

#include"16_21.h"

template<typename,typename> class unique_pointer;

// 类模板除了类内不带尖括号，其余都要带

//友元声明
template<typename T,typename D>
void swap(unique_pointer<T,D>& lhs, unique_pointer<T,D>& rhs);

// 类定义，通过默认模板实参 D=DebugDelete
// unique_ptr 不支持拷贝与赋值

template<typename T,typename D=DebugDelete>
class unique_pointer{

    friend void swap(unique_pointer<T,D>& lhs, unique_pointer<T,D>& rhs);

private:
    T* ptr = nullptr;
    D deleter = D();// 默认构造函数
    // 也可以D deleter
public:
    // 定义为删除的，阻止拷贝构造 和赋值，就不能够再使用了
	unique_pointer(const unique_pointer&) = delete;
	unique_pointer& operator = (const unique_pointer&) = delete;

    // 默认构造函数
	unique_pointer() = default;
	explicit unique_pointer(T* up) : ptr(up) {}

    //移动拷贝构造
    unique_pointer(unique_pointer&& up) noexcept
		: ptr(up.ptr) { up.ptr = nullptr; }//移交控制权

    //移动赋值
    unique_pointer& operator =(unique_pointer&& rhs) noexcept;

  // unique_ptr置为空操作
	unique_pointer& operator =(std::nullptr_t n) noexcept;

    T& operator*() const {return *ptr;}
    T* operator->() const {return &(this->operator*())}
    operator bool() const {return ptr?true:false;}

    T* get() const noexcept{
        return ptr; 
    }

    void swap(unique_pointer<T,D>& rhs){
        ::swap(*this,rhs);
    }

    void reset() noexcept{
        deleter(ptr);// delete ptr,ptr为空悬指针
        ptr = nullptr;
    }

    void reset(T* p) noexcept{
        deleter(ptr);// delete ptr,ptr为空悬指针
        ptr = p;
    }
    // 返回ptr且让ptr变为nullptr
    T* release();
	~unique_pointer()
	{
		deleter(ptr);
	}
};


template<typename T, typename D>
inline void swap
(unique_pointer<T,D>& lhs, unique_pointer<T,D>& rhs){
    using std:::swap;
    swap(lhs.ptr, rhs.ptr);
    swap(lhs.deleter,rhs.deleter);
}


//移动拷贝
template<typename T, typename D>
inline unique_pointer<T,D>& 
unique_pointer<T,D>::operator=(unique_pointer&& rhs) noexcept{
    if(this->ptr != rhs.ptr){
        deleter(ptr);
        ptr = nullptr;
        ::swap(*this,ptr);
    }
    return *this;
}

// std::nullptr_t assignment
template<typename