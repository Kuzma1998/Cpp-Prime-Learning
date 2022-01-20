#include<iostream>
#include<string>
using namespace std;


template<typename T>
ostream& print(ostream& os,const T& t){
    return os<<t<<" ";
}

template<typename T,typename... Args>
ostream& print(ostream& os,const T& t,const Args&... args){
    os<<t<<" ";
    return print(os,args...);// 递归调用
}

int main(){
    int i=12;
    string s= "this";

    print(cout,i,s,42);
}