/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 09:37:07
 */

// > 标准库定义了一个名为 count_if 的算法。类似 find_if，
// 此函数接受一对迭代器，表示一个输入范围，还接受一个谓词，会对输入范围中每个元素执行。
// count_if返回一个计数值，表示谓词有多少次为真。使用count_if重写我们程序中统计有多少单词长度超过6的部分。

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int bigerThan6(const vector<string>& words){
    return count_if(words.begin(), words.end(),[](const string& a){ return a.size()>6;});
}


int main(){
    vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
	std::cout << "ex10.20: " << bigerThan6(v) << std::endl;

	return 0;
}