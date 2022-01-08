/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 14:55:42
 */
// > 给定一个包含10 个元素的vector，将位置3到7之间的元素按逆序拷贝到一个list中。
#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> l;
    copy(v.rbegin() + 3, v.rbegin() + 8, back_inserter(l));
    for (auto i : l)
        cout << i << " ";
    cout << endl;
}