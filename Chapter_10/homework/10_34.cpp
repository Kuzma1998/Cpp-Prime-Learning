/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 14:44:37
 */


// > 使用 reverse_iterator 逆序打印一个vector。
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    for(auto it=vec.rbegin(); it!=vec.rend();++it){
        cout<<*it<<" " ;
    }
    cout<<endl;
    return 0;
}