/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 10:59:09
 */
// 为你的类值版本的 HasPtr 编写 swap 函数，并测试它。为你的 swap 函数添加一个打印语句，指出函数什么时候执行。
#include<string>
#include<iostream>
using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr&,HasPtr&);
    HasPtr(const string& s= string()) : ps(new string(s)), i(0){}
    HasPtr(const HasPtr& hp): ps(new string(*hp.ps)), i(hp.i){}
    HasPtr& operator=(const HasPtr& hp){
        auto new_ps = new string(*hp.ps);// 拷贝了hp得string，二者指向不同得内存
        delete ps;
        ps = new_ps;
        i = hp.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }
    void show(){
        cout<<*ps <<endl;
    }
private:
    string* ps;
    int i;
};

inline void swap(HasPtr& lhs, HasPtr& rhs){
    using std::swap;
    lhs.show();
    rhs.show();
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    lhs.show();
    rhs.show();

}


int main(){
    HasPtr lhs(string("LHX"));
    HasPtr temp(string("LJX"));
    HasPtr rhs = temp;
    swap(lhs, rhs);
}