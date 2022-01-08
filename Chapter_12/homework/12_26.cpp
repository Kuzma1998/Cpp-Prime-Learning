/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-26 21:04:19
 */

#include<iostream>
#include<string>
#include<memory>
using namespace std;

int main(){
    int n =5;
    allocator<string> alloc;//定义内存分配器，
    auto p = alloc.allocate(n);// 分配n个未初始化的内存
    string s;
    auto q = p;// q指向最后构造元素之后的位置
    while(cin>>s&&q!=p+n){
        alloc.construct(q++,s);//
    }
    while(q!=p){
        cout<<*--q<<endl;
        alloc.destroy(q); 
    }
    alloc.deallocate(p,n);


}