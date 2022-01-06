/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 10:03:46
 */

#include<string>
using namespace std;

class HasPtr{
public:
    HasPtr(const string& s= string()) : ps(new string(s)), i(0){}
    HasPtr(const HasPtr& hp): ps(new string(*hp.ps)), i(hp.i){}
    HasPtr& operator=(const HasPtr& hp){
        auto new_ps = new string(*hp.ps);// 拷贝了hp得string，二者指向不同得内存
        delete ps;
        ps = new_ps;
        i = hp.i;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    }

private:
    string* ps;
    int i;
};