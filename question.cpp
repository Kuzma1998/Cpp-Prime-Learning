/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-23 18:01:03
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 19:34:11
 */
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    // char ch;
    // do{
    //     printf("Please input(y/n)?\n");
    //     scanf("%c",&ch);
    //     // while(getchar() != '\n');
    //     cout<<ch<<endl;
    // }while(ch!='y'&&ch !='n'&&ch != 'Y'&&ch !='N');
    // if(ch=='y'||ch=='Y')
    //     printf("yes\n");
    // else
    //     printf("no\n");
    
    // return 0;
    char* str = "hello";
    cout<<*(str+4)<<endl;
    return 0;

}