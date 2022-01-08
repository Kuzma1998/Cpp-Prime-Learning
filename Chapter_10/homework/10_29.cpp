/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 11:04:48
 */
// > 编写程序，使用流迭代器读取一个文本文件，存入一个vector中的string里。

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

// data\books.txt
int main(){
    fstream ifs("F:/OneDrive2/OneDrive - csu.edu.cn/C++learning/C++prime/data/books.txt");

    istream_iterator<string> in_iter(ifs),eof; 
    vector<string> vec;
    copy(in_iter,eof,back_inserter(vec));
    copy(vec.begin(),vec.end(),ostream_iterator<string>(cout,"\n"));//把vector的元素copy到cout打印

}