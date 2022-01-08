/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 20:51:17
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-28 20:58:08
 */
#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main(){
    list<char*> lines(4,"hello cpp");

    vector<string> vs;
    vs.assign(lines.begin(), lines.end());
    for(auto i:vs)  
        cout<<i<<endl;
    return 0;
}