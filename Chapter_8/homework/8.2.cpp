/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 19:09:11
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 19:12:10
 */
// > 测试函数，调用参数为cin。

#include<iostream>
#include<string>
using namespace std;

istream& func(istream& is){ 
    string buf;
    while(is>>buf){
        cout<<buf<<endl;
    }
    is.clear();
    return is;
}

int main(){
    istream& is = func(cin);
    cout<<is.rdstate()<<endl;// 返回流is当前的状态，返回类型为isostate
    return 0;
}
