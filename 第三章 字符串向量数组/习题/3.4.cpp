/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:17:50
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:22:03
 */
// > 编写一段程序读取两个字符串，比较其是否相等并输出结果。
// 如果不相等，输出比较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s1,s2;
    while(cin>>s1>>s2){
        if(s1==s2){
            cout<<"the two strings are equal. "<<endl;
        }else{
            cout<<"the larger one is"<<(s1>s2)?s1:s2<<endl;
        }
    }

    while(cin>>s1>>s2){
        if(s1.size()==s2.size()) {
            cout<<"the two strings have same length."<<endl;
        }else{
            cout<<"the longer string is "<<(s1.size()>s2.size())?s1:s2<<endl;
        }
    }
    return 0;
}
