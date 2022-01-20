#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template<typename T>
string debugrep(const T& t){
    ostringstream ret;
    ret<<t;
    return ret.str();
}

template<typename T>
string debugrep(T* p){
    ostringstream ret;
    ret<<"pointer"<<p;  
    if(p)
        ret<<" "<<debugrep(*p);
    else
        ret<<"null pointer";
    return ret.str();
}


int main(){ 
    string s("hello");
    cout<<debugrep(s)<<endl;
    cout<<debugrep(&s)<<endl;
}