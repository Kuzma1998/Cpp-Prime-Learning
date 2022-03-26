/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-19 19:13:45
 */
// > 编写你自己的单词计数程序。

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> mp;
    string words;
    while(cin>>words){
        mp[words]++;
    }
    for(auto func:mp){
        cout<<func.first<<" has occurs "<<func.second<<" times"<<endl;
    }
    return 0;
}