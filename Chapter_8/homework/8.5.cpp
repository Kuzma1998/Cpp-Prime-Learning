/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 19:49:14
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 19:49:14
 */
// > 重写上面的程序，将每个单词作为一个独立的元素进行存储。

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void ReadFileToVec(const string &filename,vector<string>& vec){
    ifstream ifs(filename);// 创建文件里ifs，关联文件filename
    if(ifs){
        string buf;
        while(ifs>>buf) //从ifs流里面读取个单词
            vec.push_back(buf);
    }
}
 