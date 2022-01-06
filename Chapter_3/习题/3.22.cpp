/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 19:18:54
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 19:29:05
 */
// > 修改之前那个输出text第一段的程序，首先把text的第一段全部改成大写形式，然后输出它。

#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

int main(){
    vector<string> text;
	text.push_back("aaaaaaaaaa aaaaaaaaa aaaaaa");
	text.push_back("");
	text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbbbbbbbb");
    for(auto it = text.begin(); it != text.end()&&!it->empty(); ++it){
        for(auto & i:*it){
            if(isalpha(i)){
                i = toupper(i);
            }
        }
    }
    for (auto it : text)
	{
		cout << it << endl;
	}
	return 0;
}