/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 08:42:11
 */

// > 使用 lambda 编写你自己版本的 biggies。
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

void biggers(vector<string> &words, int sz)
{
    elimDups(words);
    // 按单词长度排序，长度相同维持字典序
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
                { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
                      { return a.size() >= sz; });
    for_each(wc, words.end(), [](const string &a)
             { cout << a << endl; });
}

int main()
{

    vector<string> v{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
    cout << "ex10.16: "<<endl;
    biggers(v, 3);
    cout << endl;
    return 0;
}