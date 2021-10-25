/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:24:39
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 18:30:26
 */


// > 改写上题程序，不过这次读入的是字符串。
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    vector<string> v;
    while(cin>>s){
        v.push_back(s);
    }
    return 0;
}