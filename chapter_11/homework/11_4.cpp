/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-19 19:20:42
 */
// > 扩展你的程序，忽略大小写和标点。例如，"example."、"example,"和"Example"应该递增相同的计数器。

#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include <cctype>
using namespace std;

bool isBiaodian(char x){ // 谓词
    return ispunct(x);
}


void deleteAndLower(string& str);

void deleteAndLower(string& str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
    //把要删除的元素移到了末尾,ispunt -- 代表是标点
    str.erase(remove_if(str.begin(),str.end(), isBiaodian),
			str.end());
}


int main(){
    map<string,int> mp;
    string words;
    while(cin>>words){
        deleteAndLower(words);
        mp[words]++;
    }
    for(auto func:mp){
        cout<<func.first<<" has occurs "<<func.second<<" times"<<endl;
    }
    return 0;
    // string words = "l:Jxdw;;";
    // deleteAndLower(words);
    // cout<<words<<endl;
}