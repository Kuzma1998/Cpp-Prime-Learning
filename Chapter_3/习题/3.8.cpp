/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:33:09
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:34:11
 */

// ## [练习3.8](exercise3_8.cpp)

// > 分别用while循环和传统for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？

// 范围for语句更好，不直接操作索引，更简洁。

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s = "this is a string";

    decltype(s.size()) i =0; //索引i是s.size()类型
    for(i=0; i<s.size(); i++){
        s[i] ='X';
    }
	return 0;
}