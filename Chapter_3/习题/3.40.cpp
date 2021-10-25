/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:54:38
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 11:01:54
 */

#include<iostream>
#include <cstring>//使用c风格字符串要包含头文件
using namespace std;

const char s1[] = "hello";

const char s2[] = "world";

int main(){
    char s3[1000];
    
    strcpy(s3,s1);
    strcat(s3,s2);
    cout<<s3<<endl;
    return 0;
}