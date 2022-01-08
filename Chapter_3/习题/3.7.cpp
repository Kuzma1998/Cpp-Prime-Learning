/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:30:28
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:30:28
 */

// > 就上一题完成的程序而言，如果将循环控制的变量设置为char将发生什么？先估计一下结果，然后实际编程进行验证。

// 如果设置为char，那么原来的字符串不会发生改变。因为没有引用，相当于是拷贝了每个s的值然后改变，s本身并没有改变。