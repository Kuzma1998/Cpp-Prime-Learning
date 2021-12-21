/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 21:09:55
 */
// > 编写程序，定义一个作者及其作品的multimap。
//  使用find在multimap中查找一个元素并用erase删除它。确保你的程序在元素不在map 中时也能正常运行。

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
    	multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };
        
        string author = "pezy";
        string work = "CP5";
        auto pos_range = authors.equal_range(author);
        for(auto it = pos_range.first;it!=pos_range.second;){
            if(it->second!=work)
                it = authors.erase(it);// 返回删掉迭代器的下一个
            else    
                ++it; //跳过该迭代器
        }

        for(auto i:authors){
            cout<<i.first<<" "<<i.second<<endl;
        }
}
