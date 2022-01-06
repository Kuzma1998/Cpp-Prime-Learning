/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:52:30
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:54:09
 */
// > 编写一段程序，比较两个string对象。再编写一段程序，比较两个C风格字符串的内容。

#include <iostream>
#include <string>
#include <cstring>
using std::cout; using std::endl; using std::string;

int main()
{
	string s1("aaaaaaaaaa"), s2("bbbbbbbbbb");
	if (s1 == s2)
		cout << "same string." << endl;
	else if (s1 > s2)
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;

	cout << "=========" << endl;

	const char* cs1 = "aaaaaaaaaa";
	const char* cs2 = "bbbbbbbbbb";
	auto result = strcmp(cs1, cs2);
	if (result == 0)
		cout << "same string." << endl;
	else if (result < 0)
		cout << "aaaaaaaaaa < bbbbbbbbbb" << endl;
	else
		cout << "aaaaaaaaaa > bbbbbbbbbb" << endl;

	return 0;
}