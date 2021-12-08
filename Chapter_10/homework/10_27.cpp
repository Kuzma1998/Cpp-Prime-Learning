/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 10:45:40
 */


// > 除了 unique 之外，标准库还定义了名为 unique_copy 的函数，它接受第三个迭代器，
// 表示拷贝不重复元素的目的位置。编写一个程序，使用 unique_copy将一个vector中不重复的元素拷贝到一个初始化为空的list中。

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main(){
    vector<int> vec{1,1,2,3,4,4,4,4,5,5,6};
    vector<int> lst;
    unique_copy(vec.begin(), vec.end(),back_inserter(lst)); //
    // unique_copy(vec.begin(), vec.end(),lst); //
    for(auto i:lst) {
        cout<<i<<" "; //
    }
    cout<<endl;
}