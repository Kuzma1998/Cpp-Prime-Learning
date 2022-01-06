/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-26 18:28:23
 */
// > 如果你试图拷贝或赋值 unique_ptr，编译器并不总是能给出易于理解的错误信息。编写包含这种错误的程序，观察编译器如何诊断这种错误。

#include<iostream>
#include<string>
#include<memory>

using namespace std;

int main(){
    unique_ptr<string> p(new string("hello world!"));
    auto q = new string("hello world");
    string s1  ="this",*s2 = &s1;
    // unique_ptr<string>p3(s2);
    unique_ptr<string> p2(q); // 不能拷贝unique_ptr
    cout<<*p<<endl;
    cout<<*p2<<endl;
    // cout<<*p3<<endl;

    p.reset(nullptr);
    p2.reset(nullptr);
    // p3.reset(nullptr);
    return 0;
}