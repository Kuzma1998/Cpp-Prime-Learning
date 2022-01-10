#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;
using std::placeholders::_1;

int main(){
    auto data = {2,3,4,5};
    int input = 5;
    modulus<int> mod;
    // auto predicator = [&](int i){return 0==mod(input,i);};
    // auto is_div = any_of(data.begin(),data.end(),predicator);
    auto is_div = any_of(data.begin(),data.end(),bind(mod,input,_1));// _1占位符,参数顺序和bind里面顺序一样
    cout<<(is_div?"yes":"no")<<endl;

    return 0;
}