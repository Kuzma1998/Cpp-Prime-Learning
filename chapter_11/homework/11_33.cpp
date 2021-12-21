/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 21:41:35
 */

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>
// c++不可以返回局部对象的引用，但是可以返回拷贝，总结就是局部变量定义在栈区，不可以返回栈区的东西，函数结束就销毁了

using namespace std;

vector<string> word_transform(map<string, string>& Map,ifstream& trans_file);

void buildMap(ifstream& file,map<string, string>& Map);


int main(){
    ifstream file("F:/OneDrive2/OneDrive - csu.edu.cn/C++learning/C++prime/data/transform_rules.txt");
    ifstream trans_file("F:/OneDrive2/OneDrive - csu.edu.cn/C++learning/C++prime/data/for_transform.txt");
    map<string,string> Map;
    buildMap(file,Map);
    // cout<<Map["y"];
    // for(auto i:Map){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    vector<string> ans = word_transform(Map,trans_file);
    for(auto i:ans){
        cout<<i<<endl;
    }

}

void buildMap(ifstream& file,map<string, string>& Map){
    string key;
    string value;
    while(file>>key&&getline(file,value)){ // 从file读取一行
        Map[key] = value.erase(0,1);
    }
}

vector<string> word_transform(map<string, string>& Map,ifstream& trans_file){
    
    vector<string> return_ans;
    string origin_text;
    // stringstream stream;
    while(getline(trans_file,origin_text)){
        string word;
        string trans_text;
        // 按空格分割字符串
        stringstream stream(origin_text);
        while(stream>>word){
            if(Map.count(word)){
                trans_text += " ";
                trans_text += Map[word];
            }else{
                trans_text += " ";
                trans_text += word;
            }
        }
        return_ans.push_back(trans_text);
        }
    return return_ans;
}