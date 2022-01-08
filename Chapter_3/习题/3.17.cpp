/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:49:40
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 18:56:29
 */
// > 从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改为大写形式。输出改变后的结果，每个词占一行。


#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    vector<string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
    }

    for(auto &i:v)
        for(auto &j:i){
            j = toupper(j);
        }

    for(auto i:v){
        cout<<i<<" "<<endl;
    }
    return 0;
}