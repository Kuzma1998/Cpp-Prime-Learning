/*
 * @code: c++
 * @Author: Li Jiaxin
 * @Date: 2021-11-05 22:11:38
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-05 22:20:51
 */
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	forward_list<int> flst = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto prev =flst.before_begin();
    auto cur = flst.begin();
    while(cur!=flst.end()){
        if(*cur%2)
            cur=flst.erase_after(prev);
        else{
            prev = cur;
            cur++;
        }
    }
    for(auto i: flst){
        cout << i<<" ";
    }
	return 0;
}