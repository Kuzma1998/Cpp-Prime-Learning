/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 20:37:05
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 20:51:16
 */
#ifndef CP5_ex5_02_h // 头文件保护，#ifndef当且仅当预处理变量未定义为真,
#define CP5_EX5_02_h // 定义了预处理变量，再次包含头文件时，就不会执行下面代码了，只会执行一次

#include<string>
using namespace std;

struct Sales_data{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data:: combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue = rhs.revenue;
    return *this;
}