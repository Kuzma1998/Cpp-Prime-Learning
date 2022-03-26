/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-19 21:19:52
 */

// > 编写程序，读入string和int的序列，将每个string和int存入一个pair 中，pair保存在一个vector中。

#include<iostream>
#include<vector>
#include<string>
#include<utility>
using namespace std;

int main(){
    int num = 0;string str;
    vector<pair<string,int>> vec;
    while(cin>>num>>str){
        vec.push_back(make_pair(str,num));
    }
    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}