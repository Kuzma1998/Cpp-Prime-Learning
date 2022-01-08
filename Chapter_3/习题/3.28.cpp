/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 09:53:52
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 09:56:19
 */
> 下列数组中元素的值是什么？

string sa[10];
int ia[10];
int main() {
	string sa2[10];
	int ia2[10];
}

// 函数体外变量是内置数据类型默认初始化，字符串也被初始化为空
// 函数体内内置数据类型不初始化，未定义，string不是内置数据类型，还是初始化为空