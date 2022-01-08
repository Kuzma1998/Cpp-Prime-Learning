/*
 * @code: c++
 * @Author: Li Jiaxin
 * @Date: 2021-11-06 15:01:48
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-06 15:08:29
 */

#include<iostream>
#include<string>
#include<forward_list>
using namespace std;

void find_and_insert(forward_list<string>& flst,string s1,string s2){
    auto prev = flst.before_begin();
    auto cur = flst.begin();
    while(cur!=flst.end()){
        if(*cur==s1){
            flst.insert_after(cur,s2);
            return;
        }else{
            prev = cur;
            ++cur;
        }
    }
    flst.insert_after(prev,s2);
}

