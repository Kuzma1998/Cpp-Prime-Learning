/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 20:28:44
 */
// > 重写11.1节练习的单词计数程序，使用insert代替下标操作。你认为哪个程序更容易编写和阅读？解释原因。

// 使用 insert 更容易阅读和编写。insert 有返回值，可以明确的体现出插入操作的结果。#include<iostream>
#include<map>
#include<string>
#include<iostream>
#include<set>
using namespace std;

// int main(){
//     map<string,int> mp;
//     string words;
//     while(cin>>words){
//         mp[words]++;
//     }
//     for(auto func:mp){
//         cout<<func.first<<" has occurs "<<func.second<<" times"<<endl;
//     }
//     return 0;
// }

int main(){
    // map<string,int> mp;
    // string words;
    // while(cin>>words){
    //     auto result = mp.insert({words,1});
    //     if(!result.second) // 没插入成功，说明words存在了，result.first代表指向words的迭代器，result.second 为bool值
    //         ++result.first->second; // map[words]++；
    // }
    // for(auto const& i:mp){ // mp的元素为pair
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    set<int> s{1,2,3,4,5,6,7,8,9};
    cout<<*(s.find(1));
}