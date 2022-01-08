/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 20:46:48
 */

#include<iostream>
#include<vector>
using namespace std;

struct X{
    X(){cout<<"X()"<<endl;}
    X(const X&) {cout<<"X(const X&)"<<endl;}
    X& operator=(const X&) {cout << "X& operator=(const X&)" << endl; return *this; }
    ~X(){cout << "~X()" << endl; }
};

void f(const X &rx, X x)
{
	std::vector<X> vec;
	vec.reserve(2);
	vec.push_back(rx);
	vec.push_back(x);
}

int main(){
    X* x1 = new X;
    f(*x1,*x1);
    delete x1;
    return 0;
}