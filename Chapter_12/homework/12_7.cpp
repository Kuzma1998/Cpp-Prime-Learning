/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-25 16:39:54
 */
// > 重做上一题，这次使用 shared_ptr 而不是内置指针。

#include<iostream>
#include<memory>
#include<vector>
using namespace std;



shared_ptr<vector<int>> alloc_vector(){
    return make_shared<vector<int>>(); //值初始化
}

void assign_vector(shared_ptr<vector<int>> p){
    int i;
    while(cin>>i){
        p->push_back(i);
    }
}

void print_vector(shared_ptr<vector<int>> p){
    for(auto i:*p){
        cout<<i<<endl;
    }
}

int main(){
    shared_ptr<vector<int>> p= alloc_vector();
    assign_vector(p);
    print_vector(p);
    return 0;
}