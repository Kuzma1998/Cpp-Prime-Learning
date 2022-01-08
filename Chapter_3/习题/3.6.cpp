/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:28:12
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:29:14
 */
// > 编写一段程序，使用范围for语句将字符串内所有字符用X代替。

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s = "this is a string";
    for(auto &i:s){
        i = 'X';
    }
    cout<<s<<endl;
    return 0;
}