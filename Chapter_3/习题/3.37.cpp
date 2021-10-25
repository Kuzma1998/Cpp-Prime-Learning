/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:46:56
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:51:00
 */

> 下面的程序是何含义，程序的输出结果是什么？
```cpp
const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```

会将ca 字符数组中的元素打印出来。但是因为没有空字符的存在，程序不会退出循环。