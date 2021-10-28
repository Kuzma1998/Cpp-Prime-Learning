/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 20:15:25
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-28 20:21:44
 */
#include<iostream>
using namespace std;

int main(){
    char a[8]= "ljxdwkz";
    int b[3] = {1,2,3};
    cout<<a<<" "<<endl;// 打印字符数组名字，输出整个数组
    cout<<&a<<" "<<endl;// 输出地址
    cout<<a[7]<<" "<<endl;//换行符
    cout<<b<<" "<<endl;// 输出地址
    cout<<&b<<" "<<endl;// 输出地址
}