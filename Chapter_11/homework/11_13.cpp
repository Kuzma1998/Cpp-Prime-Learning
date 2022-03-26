/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 19:00:34
 */
// > 在上一题的程序中，至少有三种创建pair的方法。编写此程序的三个版本，
// 分别采用不同的方法创建pair。解释你认为哪种形式最易于编写和理解，为什么？
#include<iostream>
#include<vector>
#include<string>
#include<utility>
using namespace std;

int main(){
    int num = 0;string str;
    vector<pair<string,int>> vec;
    while(cin>>num>>str){
        // vec.push_back(make_pair(str,num));
        // vec.push_back(pair<string,int>(str,num));
        vec.push_back({str,num});
    }
    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}