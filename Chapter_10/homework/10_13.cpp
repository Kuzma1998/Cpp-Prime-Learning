/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 21:37:39
 */

// > 标准库定义了名为 partition 的算法，它接受一个谓词，对容器内容进行划分，使得谓词为true 的值会排在容器的前半部分，
// 而使得谓词为 false 的值会排在后半部分。算法返回一个迭代器，指向最后一个使谓词为 true 的元素之后的位置。编写函数，
// 接受一个 string，返回一个 bool 值，指出 string 是否有5个或更多字符。使用此函数划分 words。打印出长度大于等于5的元素。
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isLenTanFive(const string& s){
    return s.size() > 4;
}

int main(){
    vector<string> vec{"the22","red2","fox","jumps1","over","quick2","red","slow","the","turt2le"};
    for(auto& word : vec){
        cout << word <<" "; //
    }
    cout <<endl;
    auto it = partition(vec.begin(),vec.end(),isLenTanFive);
    for(auto it1 = vec.cbegin(); it1 != it; ++it1){
        cout << *it1 <<" "; //
    }
    cout <<endl;
}