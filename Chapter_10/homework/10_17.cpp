/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 09:06:09
 */

// > 重写10.3.1节练习10.12的程序，在对sort的调用中使用 lambda 来代替函数 compareIsbn。

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

	std::sort(v.begin(), v.end(), [](const Sales_data& a, const Sales_data& b){return a.isbn() < b.isbn();});

	for (const auto &element : v)
		std::cout << element.isbn() << " ";
	std::cout << std::endl;

	return 0;
}

