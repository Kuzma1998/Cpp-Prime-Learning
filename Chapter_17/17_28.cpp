#include<iostream>
#include<random>
using namespace std;

unsigned radom_func(){
    static default_random_engine e;//随机数引擎，生成随机的无符号数
    static uniform_int_distribution<unsigned> u;//分布类型的对象
    return u(e);
}

int main(){
    cout<<radom_func()<<endl;
    cout<<radom_func()<<endl;
    return 0;
}