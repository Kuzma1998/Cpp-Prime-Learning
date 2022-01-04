/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 20:04:03
 */

// > 给定下面的类框架，编写一个拷贝构造函数，拷贝所有成员。你的构造函数应该动态分配一个新的string
// 并将对象拷贝到ps所指向的位置，而不是拷贝ps本身：

#include<string>

class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp): ps(new std::string(hp.ps)), i(hp.i) { }
private:
	std::string *ps;
	int i;
}; 
