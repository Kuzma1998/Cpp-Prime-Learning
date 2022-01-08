#include "13_39.h"

<<<<<<< HEAD
void StrVec::push_back(const std::string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

std::pair<std::string*,std::string*>
StrVec::alloc_n_copy(const std::string* b, const std::string* e)
{
	auto data = alloc.allocate(e - b);
	return{ data, std::uninitialized_copy(b, e, data) };
}

void StrVec::free()
{
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec& rhs)
{
	auto newdata = alloc_n_copy(rhs.begin(), rhs.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
//ex13.40
StrVec::StrVec(std::initializer_list<std::string> il)
{
	range_initialize(il.begin(), il.end());
=======
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
>>>>>>> 5e334f4a8f140df473eded85b601cf10e14e04fb
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
<<<<<<< HEAD
}

void StrVec::alloc_n_move(size_t new_cap)
{
	auto newdata = alloc.allocate(new_cap);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + new_cap;
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	alloc_n_move(newcapacity);
}

//ex13.40
void StrVec::range_initialize(const std::string* first, const std::string* last)
{
	auto newdata = alloc_n_copy(first, last);
	elements = newdata.first;
	first_free = cap = newdata.second;
=======
>>>>>>> 5e334f4a8f140df473eded85b601cf10e14e04fb
}