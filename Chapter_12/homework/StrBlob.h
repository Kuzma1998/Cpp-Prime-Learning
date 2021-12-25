/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-25 16:17:40
 */

#include<iostream>
#include<vector>
#include<string>
#include<initializer_list> //形参列表，类模板
#include<exception>
using namespace std;


class StrBlob{
public:
    using size_type = vector<string>:: size_type;
    StrBlob() :data(make_shared<vector<string> >()) {} //默认构造函数
    StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)){}  //构造函数

    size_type size() const{  // const 表示指向常量的指针，既可以返回一个常量StrBlob类的大小
        return data->size();
    }

    bool empty() const{ 
        return data->empty();
    }

    void push_back(const string& s) const{ 
        data->push_back(s);
    }

    void pop_back() const{
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }

    string& front(){
        check(0, "front on empty StrBlob");
		return data->front();
    }

string& back(){
		check(0, "back on empty StrBlob");
		return data->back();
	}

	const string& front() const{
		check(0, "front on empty StrBlob");
		return data->front();
	}

	const string& back() const{
		check(0, "back on empty StrBlob");
		return data->back();
	}


private:
    void check(size_type i,const string& msg) const {
        if(i>=data->size()) 
            throw std::out_of_range(msg);
    }
    shared_ptr<vector<string>> data; //shared_ptr,指向一个vector<string>
};
