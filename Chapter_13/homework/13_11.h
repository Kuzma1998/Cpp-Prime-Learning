/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 20:43:30
 */
// > 为前面练习中的 HasPtr 类添加一个析构函数。

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
    ~HasPtr(){
        delete ps;// 释放内存
    }

private:
	std::string *ps;
	int i;
}; 
