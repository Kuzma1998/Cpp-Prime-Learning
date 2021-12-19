/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-05 20:57:01
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-05 21:01:42
 */

#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
    deque<string> input;
    string str;
    while(cin>>str){
        input.push_back(str);
    }
    for(auto iter = input.begin(); iter != input.end();++iter){
        cout<<*iter<<endl;
    }
    return 0;
}