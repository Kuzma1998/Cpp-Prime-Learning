/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 14:46:44
 */
//  使用普通迭代器逆序打印一个vector。
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    auto it = vec.begin()+vec.size()-1;
        while(true){
        cout<<*it<<endl;
        if(it==vec.begin())
            break;
        it--;

    }
    cout<<endl;
    return 0;
}