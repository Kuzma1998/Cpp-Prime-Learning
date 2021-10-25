/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 19:06:50
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 19:17:09
 */
// > 请使用迭代器重做3.3.3节的第一个练习。

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void check_and_print(const vector<int>& vec)
{
	cout << "size: " << vec.size() << "  content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << (it != vec.end() - 1 ? "," : "");
	cout << "]\n" << endl;
}

void check_and_print(const vector<string>& vec)
{

	cout << "size: " << vec.size() << "  content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << (it != vec.end() - 1 ? "," : "");
	cout << "]\n" << endl;
}

int main(){
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };
    check_and_print(v1);
    //...
    return 0;

}