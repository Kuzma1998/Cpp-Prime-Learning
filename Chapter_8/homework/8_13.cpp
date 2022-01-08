/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 21:09:08
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 21:42:19
 */
// > 重写本节的电话号码程序，从一个命名文件而非cin读取数据。

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

bool valid(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
    ifstream ifs("F:/OneDrive2/OneDrive - csu.edu.cn/C++learning/C++prime/data/phonenumbers.txt");// 读取文件绑定ifs
    if (!ifs) // 读取文件失败
    {
        cerr << "No data?" << endl;
        return -1;
    }
    string line, word;
    vector<PersonInfo> people;
    while (getline(ifs, line)) //从文件读取一行到line
    {
        PersonInfo info;
        istringstream record(line); //line绑定内存string io
        record >> info.name;// 从内存string读取name，读取一个单词
        while (record >> word) // 从内存string读取电话
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (const auto &entry : people)
    {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
        {
            if (!valid(nums))
            {
                badNums << " " << nums;
            }
            else
            {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty())
        {
            cout << entry.name << " " << formatted.str() << endl;
        }
        else
        {
            cerr << "input error: " << entry.name << " invalid numbers " << badNums.str() << endl;
        }
    }
}