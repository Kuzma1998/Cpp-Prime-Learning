/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 21:01:39
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 21:04:11
 */
// > 本节的程序在外层while循环中定义了istringstream 对象。
// 如果record 对象定义在循环之外，你需要对程序进行怎样的修改？重写程序，将record的定义移到while 循环之外，验证你设想的修改方法是否正确。

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::vector; using std::string; using std::cin; using std::istringstream;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record; // 定义在外面
	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();// 先把 record状态复位
		record.str(line);// 把line拷贝到str
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (auto &p : people)
	{
		std::cout << p.name << " ";
		for (auto &s : p.phones)
			std::cout << s << " ";
		std::cout << std::endl;
	}

	return 0;
}