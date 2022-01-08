#include "13_53.h"
#include <iostream>
#include <windows.h>

inline void swap(HasPtr &lhs, HasPtr &rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	std::cout << "call swap" << std::endl;
}

HasPtr::HasPtr(const string &s): ps(new string(s)), i(0){
    std::cout<<"call construct"<<std::endl;
}

HasPtr::HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i){
    std::cout<<"copy construct"<<std::endl;
}

HasPtr::HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i)
{
	p.ps = nullptr;
	std::cout << "move constructor" << std::endl;
}

HasPtr& HasPtr::operator=(HasPtr rhs)
{
	swap(*this, rhs);
	return *this;
}

HasPtr::~HasPtr()
{
	std::cout << "call destructor" << std::endl;
	delete ps;
}


int main(){
    
	HasPtr s1("LJH");
	HasPtr s2("ljx");
	DWORD start, end;
	start = GetTickCount();
	for(int i = 0; i <15;++i)
		swap(s1,s2);
	end = GetTickCount()-start;
	std::cout<<100000*end<<std::endl;

/**************************************/

	HasPtr s3 = std::move(s1);
	HasPtr s4 = std::move(s2);
	DWORD start1, end1;
	start1 = GetTickCount();
	for(int i = 0; i < 5;++i){
		swap(s3,s4);
	}
	end1 = GetTickCount()-start1;
	std::cout<<10000*end1<<std::endl;
}