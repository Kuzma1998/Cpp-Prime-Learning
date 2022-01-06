/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:57:27
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 18:59:11
 */


> 下面的程序合法吗？如果不合法，你准备如何修改？

vector<int> ivec;
ivec[0] = 42;


不合法,不可以以下标形式添加元素。应改为：

ivec.push_back(42);
