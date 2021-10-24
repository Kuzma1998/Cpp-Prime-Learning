/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 20:36:09
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 20:38:14
 */

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

istream& func(istream& is){
    string buf;
    while(is>>buf){
        cout<<buf<<endl;
        is.clear()
        return is;
    }
}

int main(){
    istringstream iss("hello world"); // 定义一个string流
    func(iss);
    return 0;
}