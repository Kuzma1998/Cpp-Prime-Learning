/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-19 20:33:58
 */
// > 编写一个程序，在一个vector而不是一个set中保存不重复的单词。使用set的优点是什么？

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    vector<string> vec = {"aa", "bb", "cc", "dd", "ee", "ff"};
    string words;
    while(cin>>words){
        if(find(vec.begin(), vec.end(), words)==vec.end())
            vec.push_back(words);
    }

    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}