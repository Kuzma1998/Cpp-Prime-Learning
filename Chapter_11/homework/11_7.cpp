/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-19 20:24:07
 */
// > 定义一个map，关键字是家庭的姓，值是一个vector，保存家中孩子（们）的名。
// 编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子。

#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include <cctype>
#include<vector>
using namespace std;

int main(){
    map<string, vector<string>> mp;
    string family;
    string name;
    while(cin>>family){
        while(cin>>name){
            mp[family].push_back(name);
    }
}
}