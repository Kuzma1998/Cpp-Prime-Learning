/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 21:28:05
 */
// > 编写程序，使用 stable_sort 和 isShorter 将传递给你的 elimDups 版本的 vector 排序。打印 vector的内容，验证你的程序的正确性。

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool shorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vec{"the", "red", "fox", "jumps", "over", "quick", "red", "slow", "the", "turtle"};
    for (auto &word : vec)
    {
        cout << word << " "; //
    }
    cout << endl;
    elimDups(vec);
    for (auto &word : vec)
    {
        cout << word << " "; //
    }
    cout << endl;
    stable_sort(vec.begin(), vec.end(), shorter);
    for (auto &word : vec)
    {
        cout << word << " "; //
    }
    cout << endl;
}