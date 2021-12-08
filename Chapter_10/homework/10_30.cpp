/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 11:13:56
 */
// > 使用流迭代器、sort 和 copy 从标准输入读取一个整数序列，将其排序，并将结果写到标准输出。
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    istream_iterator<int> in_iter(cin),eof;
    ostream_iterator<int> out_iter(cout," ");
    vector<int> vec;
    while(in_iter!=eof){
        vec.push_back(*in_iter++);
    }
    sort(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(),out_iter); //使用copy和ostream_iter也可以打印
    


}











