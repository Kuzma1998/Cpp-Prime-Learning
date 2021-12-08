/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 09:16:54
 */

// > 用 stable_partition 重写前一题的程序，与 stable_sort 类似，在划分后的序列中维持原有元素的顺序。

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimdups(std::vector<std::string> &vs)
{
	std::sort(vs.begin(), vs.end());
	auto new_end = std::unique(vs.begin(), vs.end());
	vs.erase(new_end, vs.end());
}

void biggies_stable_partition(std::vector<std::string> &vs, std::size_t sz)
{
	elimdups(vs);

	auto pivot = stable_partition(vs.begin(), vs.end(), [sz](const std::string& s)
	{
		return s.size() >= sz;
	});

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