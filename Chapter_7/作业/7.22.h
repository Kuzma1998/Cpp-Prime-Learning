/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-08 21:56:56
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-08 21:59:04
 */

#ifndef CP5_ex7_22_h
#define CP5_ex7_22_h


#include <string>
#include <iostream>

class Person
{
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);

private:
    std::string name;
	std::string address;
    
public:
	std::string const& getName()    const { return name; }
	std::string const& getAddress() const { return address; }


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