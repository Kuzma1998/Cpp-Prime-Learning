/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 19:54:24
 */
// > 假定 c 是一个string的multiset，v 是一个string 的vector，解释下面的调用。指出每个调用是否合法：
// ```cpp
// copy(v.begin(), v.end(), inserter(c, c.end()));
// copy(v.begin(), v.end(), back_inserter(c));
// copy(c.begin(), c.end(), inserter(v, v.end()));
// copy(c.begin(), c.end(), back_inserter(v));
// ```
// 第二个调用不合法，因为 multiset 没有 push_back 方法。其他调用都合法。
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    vector<string> v{"1234","hello","world"};
    multiset<string> s;
    copy(v.begin(), v.end(),inserter(s, s.begin()));
    for(const auto i:s){
        cout<<i<<endl;
    }

}