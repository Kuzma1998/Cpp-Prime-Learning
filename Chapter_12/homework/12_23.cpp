/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-26 19:28:56
 */
// > 编写一个程序，连接两个字符串字面常量，将结果保存在一个动态分配的char数组中。重写这个程序，连接两个标准库string对象。


#include<string>
#include<iostream>
#include<memory>
#include<cstring>
using namespace std;

int main(){
    const char* s1 = "hello";
    const char* s2 = " world";
    int size = strlen(s2)+strlen(s1);
    auto it = new char[100]();
    auto iter=it;
    for(int i=0;i<strlen(s1);++iter){
        *(iter+i) = *s1++;
    }
    for(int i=0;i<strlen(s2);++iter){
        *(iter+i) = *s2++;
    }

    cout<<it<<endl;

    // delete [] it;
    // const char *c1 = "Hello ";
	// const char *c2 = "World";
	// unsigned len = strlen(c1) + strlen(c2) + 1;
	// char *r = new char[len]();
	// strcat_s(r, len, c1);
	// strcat_s(r, len, c2);
	// std::cout << r << std::endl;

	// std::string s1 = "Hello ";
	// std::string s2 = "World";
	// strcpy_s(r, len, (s1 + s2).c_str());
	// std::cout << r << std::endl;

	// delete[] r;

	// return 0;
}