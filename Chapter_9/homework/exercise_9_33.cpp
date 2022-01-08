/*
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-06 15:57:58
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-06 16:04:37
 */
// > 在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？编写程序，去掉此赋值语句，验证你的答案。

#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl;

int main()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto begin = v.begin();
	while (begin != v.end())
	{
        cout<<*begin;
		++begin;
        cout<<*begin;
		/*begin = */
        v.insert(begin, 42);
		++begin;
	}

	for (auto i : v)
		cout << i << " ";

	return 0;
}