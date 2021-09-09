/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:15:14
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:16:19
 */

// > 请说明string类的输入运算符和getline函数分别是如何处理空白字符的。

// * 类似 is >> s 的读取，string对象会忽略开头的空白并从第一个真正的字符开始，直到遇见下一空白为止 一个单词一个单词读取，单词以空白分割
// * 类似 getline(is, s) 的读取，string对象会从输入流中读取字符，直到遇见换行符为止。不会跳过最开始的空白，遇到换行符就是下一行