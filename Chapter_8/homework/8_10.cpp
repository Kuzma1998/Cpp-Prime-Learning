/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 20:41:59
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 21:00:51
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ifstream ifs("F:/OneDrive2/OneDrive - csu.edu.cn/C++learning/C++prime/Chapter_8/homework/book.txt");
    if (!ifs)
    {
        cerr << "No data?" << endl;
        return -1;
    }
    vector<string> vecLine;
    string line;
    while (getline(ifs, line))
    {
        vecLine.push_back(line);
    }
    for (auto &s : vecLine)
    {
        istringstream iss(s);
        string word;
        while (iss >> word)
        {
            cout << word << ", ";
        }
        cout<<endl;
    }
    return 0;
}