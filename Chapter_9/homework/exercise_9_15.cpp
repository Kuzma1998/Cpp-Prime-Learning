/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 21:02:37
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-28 21:03:40
 */
#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{1,2,3,4,6};
    bool flag = v1==v2?true:false;
    cout<<flag<<endl;
    return 0;
}