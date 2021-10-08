/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 21:01:50
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 21:57:52
 */


#ifndef CP5_ex7_09_h
#define CP5_ex7_09_h

#include <string>
#include <iostream>

struct Person
{
	std::string const& getName()    const { return name; }
	std::string const& getAddress() const { return address; }

	std::string name;
	std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
	string pname,paddress;
    is>>pname>>paddress;
    person.name = pname;
    person.address = paddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os<<person.name<<" "<<person.address;
    return os;
}

#endif