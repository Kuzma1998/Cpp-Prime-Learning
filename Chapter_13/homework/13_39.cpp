#include "13_39.h"

void StrVec::push_back(string& s){
    chk_n_alloc();// 确保有空间容纳新元素
    alloc.construct(first_free++,s);
}

pair<string*,string*>
StrVec::alloc_n_copy(const string* b,const string* e){
    auto data = alloc.allocate(e-b);
    return {data,uninitialized_copy(b,e,data)};
}

void StrVec::free(){
    if(elements){
        for(auto p = first_free;p!=elements;)
            alloc.destroy(--p);
    }
    alloc.deallocate(elements,cap-elements);// 销毁内存
}

StrVec::StrVec(const StrVec& rhs){
    auto newdata = alloc_n_copy(rhs.begin(),rhs.end());
    elements = newdata.first;
    first_free = newdata.second;
}

StrVec::~StrVec()
{
	free();
}

StrVec& StrVec::operator=(const StrVec& rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}