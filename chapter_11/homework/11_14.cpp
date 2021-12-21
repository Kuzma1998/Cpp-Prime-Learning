/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 19:05:58
 */
// > 扩展你在11.2.1节练习中编写的孩子姓达到名的map，添加一个pair的vector，保存孩子的名和生日。

#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    map<string, string> mp;
    vector<pair<string, string>> brith_names;
    string family;
    string name;
    string birthday;

    while (cin >> family >> name >> birthday)
    {
        mp[family] = name;
        brith_names.push_back(make_pair(name, birthday));
    }

    for (auto i : mp)
    {
        cout << i.first << i.second<<" ";
    }
    cout << endl;
    for (auto i : brith_names)
    {
        cout << i.first<<": " << i.second<<" ";
    }
    cout << endl;
}
