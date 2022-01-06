/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 21:31:47
 */
// 编写名为 compareIsbn 的函数，比较两个 Sales_data 对象的isbn() 成员。使用这个函数排序一个保存 Sales_data 对象的 vector。
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "exercise7_36.h"
using namespace std;


bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2){
    return sd1.isbn() <sd2.isbn();
}


int main(){
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	std::vector<Sales_data> v{ d1, d2, d3, d4, d5 };

	std::sort(v.begin(), v.end(), compareIsbn);

	for (const auto &element : v)
		std::cout << element.isbn() << " ";
	std::cout << std::endl;

	return 0;
}

