/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-09 20:23:51
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-09 20:25:56
 */
// > 编写一段程序从标准输入中读入多个字符串并将他们连接起来，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分割开来。

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string s,result;
    while(cin>>s){
        result += s;
    }
    cout<<result<<endl;
    
    while(cin>>s){
        result += s +" ";
    }
    cout<<result<<endl;
    return 0;
}