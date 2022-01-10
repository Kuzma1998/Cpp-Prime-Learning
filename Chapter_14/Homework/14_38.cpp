#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

struct IsEqual{
public:
    IsEqual(size_t sz): size(sz) {}
    bool operator()(const string& s) const {
       return s.size() == size; 
    }
    size_t return_size() const { return size; }

private:
    size_t size;

};

int main(){
    // 建立预测器
    auto lengths = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    vector<IsEqual> predicates;
    for(auto length : lengths){
        predicates.push_back(IsEqual(length));
    }

    // 创建哈希表
    map<size_t,size_t> count_table;
    for(auto length : lengths){
        count_table[length] = 0;
    }

    // 读取文件
    ifstream fs("J:/OneDrive - csu.edu.cn/C++learning/C++prime/data/storyDataFile.txt");
    for(string word;fs>>word;){
        for(auto is_equal:predicates){
            if(is_equal(word))
                ++count_table[is_equal.return_size()];
        }
    }

    for(auto pair:count_table){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

}
