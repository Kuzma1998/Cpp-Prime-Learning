/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 20:22:24
 */
// > 为13.1.1节练习13.5中的 HasPtr 类编写赋值运算符。类似拷贝构造函数，你的赋值运算符应该将对象拷贝到ps指向的位置。


#include<string>

class HasPtr {
public:
	HasPtr(const std::string& s = std::string()):
		ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp): ps(new std::string(hp.ps)), i(hp.i) { }
    HasPtr& operator=(const HasPtr& hp){
        std::string *new_ps = new std::string(hp.ps);
        delete ps;
        ps = new_ps;
        i = hp.i;
        return *this;
    }
private:
	std::string *ps;
	int i;
}; 
