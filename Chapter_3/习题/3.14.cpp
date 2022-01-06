/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:19:24
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 18:30:45
 */

// > 编写一段程序，用cin读入一组整数并把它们存入一个vector对象。

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int i;
    while(cin>>i){
        v.push_back(i);
    }
    return 0;
}