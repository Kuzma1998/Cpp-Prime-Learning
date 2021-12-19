/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-11-05 21:32:21
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-11-05 21:34:53
 */
// 编写程序，分别使用 at、下标运算符、front 和 begin 提取一个vector中的第一个元素。在一个空vector上测试你的程序。
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(1);
	std::cout << v.at(1);       
	// std::cout << v[0];        
	// std::cout << v.front();    
	// std::cout << *v.begin();   
	return 0;
}