/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 20:50:08
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 20:50:08
 */

#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h

#include <string>

class Person
{
	std::string name;
	std::string address;
public:
    string get_name() const {return name;}
    string get_address() const {return address;}

};

#endif