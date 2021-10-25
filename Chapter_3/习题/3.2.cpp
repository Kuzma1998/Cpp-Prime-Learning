/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:08:23
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:12:00
 */
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	string line;
    while(getline(cin,line)) {
        cout<<line<<endl;// 一次读入一行，遇到回车就说明下一行
    }

    string line2;
    while(cin>>line2){
        cout<<line2<<endl;//一次读入一个单词，当遇到空格就说明下一个单词，输出一个单词之后令起一行输出下一个单词
    }
}