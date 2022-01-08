#ifndef CP5_ex13_53_h
#define CP5_ex13_53_h

#include<string>
using namespace std;
class HasPtr{
public:
    friend void swap(HasPtr&,HasPtr&);
    HasPtr(const string& s= string());
    HasPtr(const HasPtr& hp);
    HasPtr(HasPtr&& hp) noexcept;//移动构造````````````
    HasPtr& operator=(HasPtr rhs); //移动赋值和拷贝赋值
    ~HasPtr();
private:
    string * ps;
    int i;
};