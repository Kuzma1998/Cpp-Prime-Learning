/*
 * @Description: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-05 21:52:48
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-05 22:09:06
 */

#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main(){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v;
    list<int> l;
    for(auto i:ia){
        v.push_back(i);
        l.push_back(i); 
    }
    // for(auto iter=v.begin(); iter!=v.end();){
    //     if(!(*iter%2))
    //         v.erase(iter);
    //     else{
    //         iter++;
    //     }
    // }
    for(auto i:v){
        cout << i <<" ";
    }
    auto iter=v.begin();
    v.erase(v.begin(),v.begin()+2);
    cout<<endl;
    for(auto i:v){
        cout << i <<" ";
    }
}
