/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 10:14:16
 */
// > 给定一个string，使用 bind 和 check_size 在一个 int 的vector 中查找第一个大于string长度的值。
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;


bool check_size(const int a, const string& b) {
        return a>b.size();
}


int main(){
    string str ="hello";
    vector<int> vec {1,2,3,4,5,6,7,8,9};
    auto it = find_if(vec.begin(), vec.end(),bind(check_size,_1,str));
    cout<<*it<<endl;
}