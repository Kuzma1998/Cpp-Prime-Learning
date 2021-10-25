<!--
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 19:23:22
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 19:28:49
-->
# Using声明

&ensp;&ensp;比如`iostream,string,vector`等都是c++标准库，标准库的函数对象基本上都属于名称空间std。

- 使用某个命名空间：例如 `using std::cin`表示使用命名空间`std`中的名字`cin`。
- 每个名称都需要有独立的using声明。
- - 头文件中不应该包含`using`声明。这样使用了该头文件的源码也会使用这个声明，会带来风险。
