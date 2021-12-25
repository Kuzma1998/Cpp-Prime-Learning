/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-25 16:35:28
 */
// > 编写函数，返回一个动态分配的 int 的vector。将此vector 传递给另一个函数，这个函数读取标准输入，
// 将读入的值保存在 vector 元素中。再将vector传递给另一个函数，打印读入的值。记得在恰当的时刻delete vector。

#include<iostream>
#include<vector>
using namespace std;

vector<int>* alloc_vector(){
    return new vector<int>();//值初始化
}

void assign_vector(vector<int>* p){
    int i;
    while(cin>>i){
        p->push_back(i);
    }
}

void print_vector(vector<int>* p){
    for(auto i:*p){
        cout<<i<<endl;
    }
}

int main(){
    vector<int>* p = alloc_vector();
    assign_vector(p);
    print_vector(p);
    delete p; 
    return 0;
}