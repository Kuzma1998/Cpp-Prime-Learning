/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-08 21:21:11
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:42:20
 */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    // string w1 ="ads" + word;
    // while(cin>>word){
    //     cout<<word<<" "<<endl;
    // }
    // cout<<word<<" "<<endl;
    // while(getline(cin, word)){
    //     cout<<word<<" "<<endl;
    // }
    string s = "this, is. a :string";
    string result;
    for(auto i:s){
        if(!ispunct(i)){
            result += i;
        }
    }
    cout<<result<<endl;
    return 0;
    return 0;
}