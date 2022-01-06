/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 21:15:54
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 21:15:55
 */


#include "7.11.h"

int main()
{
	Sales_data item1;
	print(std::cout, item1) << std::endl;

	Sales_data item2("0-201-78345-X");
	print(std::cout, item2) << std::endl;

	Sales_data item3("0-201-78345-X", 3, 20.00);
	print(std::cout, item3) << std::endl;

	Sales_data item4(std::cin);
	print(std::cout, item4) << std::endl;

	return 0;
}