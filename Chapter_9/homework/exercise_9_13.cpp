/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-10-28 20:47:38
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-10-28 20:50:43
 */
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<int> L(4,5);
    vector<int> v(4,6);
    
    vector<double> v2(L.begin(),L.end());
    for(auto i:v2)
        cout << i << " "<<endl;//

    vector<double> v3(v.begin(),v.end());
    for(auto i:v3)
        cout << i << " "<<endl;//

    return 0;
}