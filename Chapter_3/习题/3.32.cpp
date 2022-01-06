/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-17 10:12:40
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-17 10:22:07
 */
// > 将上一题刚刚创建的数组拷贝给另一数组。利用vector重写程序，实现类似的功能。

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nums1[10] = {0,1,2,3,4,5,6,7,8,9};
    int nums2[10];
    for(int i = 0; i < 10;++i){
        nums2[i] = nums1[i];
    }

    vector<int> res1;
    

    for(int i = 0; i < 10;++i){
        res1.push_back(i);
    }
    vector<int> res2(res1);
}
