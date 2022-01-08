/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 09:13:23
 */
// > 重写 biggies，用 partition 代替 find_if。我们在10.3.1节练习10.13中介绍了 partition 算法。

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

	auto pivot = partition(vs.begin(), vs.end(), [sz](const std::string& s)
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