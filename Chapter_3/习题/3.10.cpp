/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:36:07
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:42:44
 */

// > 编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分。

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s = "this, is. a :string";// 里面空格也算字符串里面的内容
    string result;
    for(auto i:s){
        if(!ispunct(i)){
            result += i;
        }
    }
    cout<<result<<endl;// this is a string
    return 0;
}