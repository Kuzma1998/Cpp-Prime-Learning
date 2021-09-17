/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 09:49:38
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 09:51:55
 */

// ## 练习3.26

// > 在100页的二分搜索程序中，为什么用的是 mid = beg + (end - beg) / 2, 而非 mid = (beg + end) / 2 ; ?

// 因为迭代器不支持加法只支持减法。