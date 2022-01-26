#include<iostream>
#include<random>
using namespace std;

unsigned radom_func(unsigned seed){
    static default_random_engine e(seed);//随机数引擎，生成随机的无符号数
    static uniform_int_distribution<unsigned> u;//分布类型的对象
    return u(e);
}

int main(){
    cout<<radom_func(2022)<<endl;
    cout<<radom_func(2021)<<endl;
    return 0;
}