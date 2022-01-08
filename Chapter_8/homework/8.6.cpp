/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 19:51:15
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 20:17:50
 */

#include<iostream>
#include<fstream>
#include "7.26.h"

using namespace std;

int main(int argc, char** argv){// argc代表argv数组的元素的个数，argv是一个数组，它的元素是一个指向C风格字符串的指针
    ifstream input(argv[1]);
    Sales_data total;
    if(read(input,total)){
        //从文件读取数据到total
        Sales_data trans; 
        while(read(input,trans)){
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(cout,total)<< endl;
                total = trans;
            }
        }
        print(cout,total)<< endl;
    }else{
        cerr<<"No data?"<< endl;
    }
    return 0;
}