/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 11:19:46
 */
// > 修改前一题的程序，使其只打印不重复的元素。你的程序应该使用 unique_copy。

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
    unique_copy(vec.begin(),vec.end(),out_iter); //使用copy和ostream_iter也可以打印
    


}