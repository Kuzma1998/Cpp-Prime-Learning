/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 21:05:32
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-28 21:16:32
 */
#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1{1,2,3,4,5};
    list<int> v2{1,2,3,4,6};

    cout<<(v1==vector<int>(v2.begin(),v2.end())?"true":"false")<<endl;// 匿名对象
    return 0;
}