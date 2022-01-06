/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 10:49:58
 */

// > 一个vector 中保存 1 到 9，将其拷贝到三个其他容器中。
// 分别使用inserter、back_inserter 和 front_inserter 将元素添加到三个容器中。
// 对每种 inserter，估计输出序列是怎样的，运行程序验证你的估计是否正确。

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5,6, 7, 8, 9};
    list<int> l1,l2,l3;
    copy(vec.begin(),vec.end(),back_inserter(l1));
    copy(vec.begin(),vec.end(),front_inserter(l2));
    copy(vec.begin(),vec.end(),inserter(l3,l3.begin()));
    for(auto i:l1) {
        cout<<i<<" "; //
    }
    cout<<endl;

    for(auto i:l2) {
        cout<<i<<" "; //
    }
    cout<<endl;

    for(auto i:l3) {
        cout<<i<<" "; //
    }
    cout<<endl;

}