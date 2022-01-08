/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 19:01:29
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 19:05:45
 */
// > 读入一组整数并把他们存入一个vector对象，将每对相邻整数的和输出出来。
// 改写你的程序，这次要求先输出第一个和最后一个元素的和，接着输入第二个和倒数第二个元素的和，以此类推。

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    vector<int> v;
    int num;
    while(cin>>num){
        v.push_back(num);
    }
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]+v[i+1]<< endl;
    }
    cout << "---------------------------------" << endl;

    int i = 0;
    int j = v.size()-1;
    while(i<j){
        cout<<v[i]+v[j]<<endl;
        ++i;
        --j;
    }
    return 0;
}