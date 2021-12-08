/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 10:08:33
 */

// > 重写统计长度小于等于6的单词数量的程序，使用函数代替 lambda。

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;

bool count_numers(const string &str, int size) {
    return str.size()>size;

}

int bigerThan6(const vector<string>& words){
    return count_if(words.begin(), words.end(),bind(count_numers,_1,6));
    // return count_if(words.begin(), words.end(),count_numers);
}


int main(){
    vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
	std::cout << "ex10.22: " << bigerThan6(v) << std::endl;

	return 0;
}