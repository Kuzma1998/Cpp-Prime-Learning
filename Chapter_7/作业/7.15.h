/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 21:25:33
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 21:33:33
 */


#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include <string>
#include <iostream>
using namespace std;

struct Person;
std::istream &read(std::istream&, Person&);

struct Person
{
	Person() = default;
    Person(const string& pname,const string& paddress): name(pname), address(paddress) {}
    Person(std::istream& is) {read(is,*this);}

	std::string getName() const { return name; }
	std::string getAddress() const { return address; }

	std::string name;
	std::string address;
};
 
std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}

#endif