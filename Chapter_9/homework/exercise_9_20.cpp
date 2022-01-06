/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-05 21:04:16
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-05 21:07:34
 */
#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main(){
    list<int> L{0,1,2,3,4,5,6,7,8,9,10,11};
    deque<int> odd,even;
    for(auto i:L) {
        i%2==0?even.push_back(i):odd.push_back(i);
    }

    for(auto i:odd){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:even){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}