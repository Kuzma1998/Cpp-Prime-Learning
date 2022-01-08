/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-16 16:28:41
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-16 16:33:54
 */

// > 3.3.3节划分分数段的程序是使用下标运算符实现的，请利用迭代器改写该程序实现完全相同的功能。

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<unsigned> socres(11,0);
    unsigned grade;
    while(cin >> grade){
        if(grade<=100){
            ++*(scores.begin() +grade/10);
        }
    }
    for(auto i = scores.begin(); i != scores.end(); ++it){
        cout<<*it<<endl;
    }
    return 0;
}