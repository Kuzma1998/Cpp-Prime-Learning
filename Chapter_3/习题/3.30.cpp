/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:09:49
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:09:50
 */
// > 指出下面代码中的索引错误。


constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
	ia[ix] = ix;


// 数组索引出现越界