/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 20:58:46
 */
// > 编写程序，使用 fill_n 将一个序列中的 int 值都设置为 0。
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{0,1,2,3,4,5,6,7};
    fill_n(v.begin(), 8,0);
    for(auto i:v){
        cout<<i<<" "<<" ";
    }
    cout<<endl;
    vector<int> v1;
    v1.resize(10);
    cout<<v1.size()<<endl;
    fill_n(v1.begin(),10,1);
    for(auto j:v1){
        cout<<j<<" "<<" ";
    }

    return 0;
}