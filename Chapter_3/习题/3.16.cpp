/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-14 18:33:03
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 18:46:00
 */
// > 编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> v1;         // size:0,  no values.
	vector<int> v2(10);     // size:10, value:0
	vector<int> v3(10, 42); // size:10, value:42
	vector<int> v4{ 10 };     // size:1,  value:10
	vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
	vector<string> v6{ 10 };  // size:10, value:""
	vector<string> v7{ 10, "hi" };  // size:10, value:"hi"

    cout << "v1 size :" << v1.size() << endl;
	cout << "v2 size :" << v2.size() << endl;
	cout << "v3 size :" << v3.size() << endl;
	cout << "v4 size :" << v4.size() << endl;
	cout << "v5 size :" << v5.size() << endl;
	cout << "v6 size :" << v6.size() << endl;
	cout << "v7 size :" << v7.size() << endl;

    cout << "v1 content : ";
    for(auto i:v1){
        cout<<i<<", ";
    }
    cout<<endl;
    cout << "v2 content : ";
    for(auto i:v2){
        cout<<i<<", ";
    }
    cout<<endl;
    // 重复。略

    return 0;

}