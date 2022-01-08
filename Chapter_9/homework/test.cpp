/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 20:15:25
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-12-16 21:05:06
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
    int ab[3][3] = {1,2,3,4,5,6,7, 8, 9};
    cout<<ab[2]<<endl;
    cout<<ab[2][2]<<endl;
    cout<<*(ab[2]-ab[2][2]);
}