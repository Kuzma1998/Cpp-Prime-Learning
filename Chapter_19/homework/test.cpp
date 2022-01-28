#include<iostream>

using namespace std;

int main(){
    int a =0;
    double b = 0;
    //typeid(a)是一个type_info 类
    if(typeid(a) ==typeid(b))
        cout<<1;

    else
        cout<<0;
}