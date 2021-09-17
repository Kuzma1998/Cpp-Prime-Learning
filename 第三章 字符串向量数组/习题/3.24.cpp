/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-16 16:21:50
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-16 16:27:21
 */


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
    int i;
    while(cin>>i){
        v.push_back(i);
    }
    for(auto it=v.begin(); it!=v.end()-1;it++){
        cout<<(*it)+*(it+1)<<endl;
    }
    auto start = v.begin();
    auto end = v.end()-1;
    while(start<end){
        cout<<(*start)+(*end)<<endl;
        start++;
        end--;
    }
    return 0;
}
