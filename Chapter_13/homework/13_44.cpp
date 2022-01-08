#include"13_44.h"
#include <algorithm>
#include <iostream>
using namespace std;


pair<char*,char*>
String::alloc_n_copy(const char* b,const char* e){
    auto str = alloc.allocate(e-b);//分配内存;
    return {str,uninitialized_copy(b,e,str)};//从b到e拷贝元素到str这一未构造的原始内存中，返回最后一个元素的内存
}


void String::range_initializer(const char* first, const char* last)
{
	auto newstr = alloc_n_copy(first, last);
	element = newstr.first;
	end = newstr.second;
}

// 接受c风格字符串的构造函数
String::String(const char* s){
    char* s1 = const_cast<char*>(s); // 去掉const性质
    while(*s1){
        ++s1;
    }
    range_initializer(s,++s1);
}

// 拷贝构造
String::String(const String& rhs){
    range_initializer(rhs.element,rhs.end);
    cout<<"Copy constructor"<<endl;
}

void String::free(){
    if(element){
        for_each(element,end,[this](char& c){alloc.destroy(&c);});
    }
    alloc.deallocate(element,end-element);//销毁内存，element代表开始的内存，n代表个数
}

String::~String()
{
	free();
}

String& String::operator=(const String& rhs){
    auto newstr = alloc_n_copy(rhs.element,rhs.end);
    free();
    element = newstr.first;
    end = newstr.second;
    cout<<"Copy Assignment"<<endl;
    return *this;
}