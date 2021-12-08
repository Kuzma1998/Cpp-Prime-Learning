/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 14:52:18
 */
//  使用 find 在一个 int 的list 中查找最后一个值为0的元素。
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    list<int> l{0,12,0,0,1,2,3,4,0,4,5,6};
    auto it =  find(l.rbegin(), l.rend(),0);
    cout<<distance(it,l.rend())<<endl;
    return 0;

}