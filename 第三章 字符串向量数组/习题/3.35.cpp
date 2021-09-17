/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:29:24
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:36:04
 */

> 编写一段程序，利用指针将数组中的元素置为0。

#include<iostream>
using namespace std;

int main(){
    const int size =7
    int nums[size];
    int *p =nums;
    for(;p!=p+size;p++){
        *p = 0;
    }
    return 0;
}