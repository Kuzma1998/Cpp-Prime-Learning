/*
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-06 15:46:43
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-06 15:55:58
 */

#include <iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> flst = { 0, 1, 2,3, 4, 5, 6, 7, 8, 9};
    auto prev = flst.before_begin();
    auto cur = flst.before_begin();
    while(cur !=flst.end()){
        if(*cur%2){
            cur = flst.insert_after(prev,*cur);
            ++cur;++cur;
            ++prev;++prev;
        }else{
            cur = flst.erase_after(prev);
        }
    }
    for(auto i:flst){
        cout<<i<<endl;
    }
}