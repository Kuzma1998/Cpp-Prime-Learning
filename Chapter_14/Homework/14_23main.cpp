#include "14_23.h"
#include "14_23.cpp"
#include <vector>
#include <iostream>

void test()
{
    StrVec vec;
	vec.reserve(6);
	std::cout << "capacity(reserve to 6): " << vec.capacity() << std::endl;

	vec.reserve(4);
	std::cout << "capacity(reserve to 4): " << vec.capacity() << std::endl;

	vec.push_back("hello");
	vec.push_back("world");

	vec.resize(4);

	for (auto i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i << std::endl;
	std::cout << "-EOF-" << std::endl;

	// vec.resize(1);

	for (auto i = vec.begin(); i != vec.end(); ++i)
		std::cout << *i << std::endl;
	std::cout << "-EOF-" << std::endl;
}

int main()
{
    test();

// 	StrVec vec_list{ "hello", "world", "pezy" }; 
// // 调用StrVec::StrVec(std::initializer_list<std::string> il)列表初始化

// 	for (auto i = vec_list.begin(); i != vec_list.end(); ++i)
// 		std::cout << *i << " ";
// 	std::cout << std::endl;

// 	// Test operator==

// 	const StrVec const_vec_list = { "hello", "world", "pezy" };
// 	if (vec_list == const_vec_list)
// 	for (const auto &str : const_vec_list)
// 		std::cout << str << " ";
// 	std::cout << std::endl;

// 	// Test operator<
// 	const StrVec const_vec_list_small = { "hello", "pezy", "ok" };
// 	std::cout << (const_vec_list_small < const_vec_list) << std::endl;
}