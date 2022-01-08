/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-24 19:44:08
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-24 19:49:07
 */
// 编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，将每一行作为一个独立的元素存于vector中。

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void ReadFileToVec(const string &filename,vector<string>& vec){
    ifstream ifs(filename);// 创建文件里ifs，关联文件filename
    if(ifs){
        string buf;
        while(getline(ifs,buf)) //从ifs流里面读取一行
            vec.push_back(buf);
    }
}
 