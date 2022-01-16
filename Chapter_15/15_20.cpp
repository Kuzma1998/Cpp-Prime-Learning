#include <iostream>
#include <string>

// #include "exercise15_5.h"
// #include "bulk_quote.h"
// #include "limit_quote.h"
// #include "disc_quote.h"

class Base
{
public:
	void pub_mem(){};   // public member
protected:
	int prot_mem;     // protected member
private:
	char priv_mem;    // private member
};

// 一次继承
struct Pub_Derv : public  Base 
{    // Base中的成员和函数原来是是啥属性在这还是啥属性
    //类内可以访问基类除了privite以外的东西
	void memfcn(Base &b) { b = *this; }
};
struct Priv_Derv : private   Base
{   //Base的成员函数在这都是私有的了
   //类内可以访问基类除了privite以外的东西
	void memfcn(Base &b) { b = *this; }
};
struct Prot_Derv : protected Base
{   //Base的成员函数在这都是保护的了
    //类内可以访问基类除了privite以外的东西
	void memfcn(Base &b) { b = *this; }
};

//二次继承
struct Derived_from_Public : public Pub_Derv
{   // public继承与自己的基类，可以访问除了base里面除了private的东西
	void memfcn(Base &b) { b = *this; }
};

// Priv_Derv的派生类不能访问基类的任何东西，因为Priv_Derv的继承基类的东西都是私有的
struct Derived_from_Private : public Priv_Derv
{   /
	//void memfcn(Base &b) { b = *this; }
};

// Prot_Derv继承基类的东西都是protected，因而Prot_Derv的派生类的成员可以访问基类的非私有的
struct Derived_from_Protected : public Prot_Derv
{   //可以访问他的基类的东西，
	void memfcn(Base &b) { b = *this; }
};

int main()
{
	Pub_Derv d1;
    d1.pub_mem();
	Base *p = &d1;

	Priv_Derv d2;
    // d2.pub_mem();
	//p = &d2;

	Prot_Derv d3;
	//p = &d3;

	Derived_from_Public dd1;
    dd1.pub_mem();
	p = &dd1;


	Derived_from_Private dd2;
	//p =& dd2;

	Derived_from_Protected dd3;
    // dd3.pub_mem();pub_mem在其基类是保护的，具体对象不能访问
	//p = &dd3;


	return 0;
}