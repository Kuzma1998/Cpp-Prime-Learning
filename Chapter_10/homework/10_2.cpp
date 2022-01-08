/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 19:57:40
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<std::string> l = { "aa", "aaa", "aa", "cc" };
	cout << count(l.cbegin(), l.cend(), "aa") << std::endl;

	return 0;
}