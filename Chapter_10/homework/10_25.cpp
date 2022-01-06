/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 10:23:40
 */

// > 在10.3.2节的练习中，编写了一个使用partition 的biggies版本。使用 check_size 和 bind 重写此函数。


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace placeholders;

bool check_size(const string& a,const int b) {
        return a.size() > b;
}


void elimdups(std::vector<std::string> &vs)
{
	std::sort(vs.begin(), vs.end());
	auto new_end = std::unique(vs.begin(), vs.end());
	vs.erase(new_end, vs.end());
}

void biggies_stable_partition(std::vector<std::string> &vs, std::size_t sz)
{
	elimdups(vs);

	// auto pivot = partition(vs.begin(), vs.end(), [sz](const std::string& s)
	// {
	// 	return s.size() >= sz;
	// });
    auto pivot = partition(vs.begin(), vs.end(), bind(check_size,_1,sz));


	for (auto it = vs.cbegin(); it != pivot; ++it)
		std::cout << *it << " ";
}


int main()
{
	std::vector<std::string> v{ "the", "quick", "red", "fox", "jumps",
		"over", "the", "slow", "red", "turtle"};

	biggies_stable_partition(v, 4);
	std::cout << std::endl;

	return 0;
}