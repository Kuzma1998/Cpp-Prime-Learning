/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-09 19:14:59
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 20:02:47
 */
#ifndef CP5_ex7_26_h // 变量未定义是为真，然后就要往下一直运行直至遇到endif
#define CP5_ex7_26_h // 第一次包含时检查indef为真，之后已经被定义不会再执行此文件

#include <string>
#include <iostream>

class Sales_data
{
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
	Sales_data() = default;
	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n*p) {}
	Sales_data(std::istream &is) { read(is, *this); }

	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

private:
	double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}

std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

#endif