/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 09:52:49
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 09:52:49
 */

> 假设txt_size 是一个无参函数，它的返回值是int。请回答下列哪个定义是非法的，为什么？
```cpp
unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 - 14];
(c) int ia[txt_size()];
(d) char st[11] = "fundamental";
```

* (a) 非法。纬度必须是一个常量表达式。
* (b) 合法。
* (c) 非法。txt_size() 的值必须要到运行时才能得到。
* (d) 非法。数组的大小应该是12。
