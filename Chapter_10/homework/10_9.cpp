/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 21:12:54
 */

//  实现你自己的 elimDups。分别在读取输入后、调用 unique后以及调用erase后打印vector的内容。

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void elimDups(vector<string>& words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique,words.end());

}

int main(){
    vector<string> vec{"the","red","fox","jumps","over","quick","red","slow","the","turtle"};
    for(auto& word : vec){
        cout << word <<" "; //
    }
    cout <<endl;
    elimDups(vec);
    for(auto& word : vec){
        cout << word <<" "; //
    }
    cout <<endl;
    return 0;

}