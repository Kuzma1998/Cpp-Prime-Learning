/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-08 21:21:11
 * @LastEditors: Li Jiaxin
 * @LastEditTime: 2021-09-14 21:09:35
 */
#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string word;
//     // string w1 ="ads" + word;
//     // while(cin>>word){
//     //     cout<<word<<" "<<endl;
//     // }
//     // cout<<word<<" "<<endl;
//     // while(getline(cin, word)){
//     //     cout<<word<<" "<<endl;
//     // }
//     string s = "this, is. a :string";
//     string result;
//     for(auto i:s){
//         if(!ispunct(i)){
//             result += i;
//         }
//     }
//     cout<<result<<endl;
//     return 0;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// int main(){
//     vector<int> v1;         // size:0,  no values.
// 	vector<int> v2(10);     // size:10, value:0
// 	vector<int> v3(10, 42); // size:10, value:42
// 	vector<int> v4{ 10 };     // size:1,  value:10
// 	vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
// 	vector<string> v6{ 10 };  // size:10, value:""
// 	vector<string> v7{ 10, "hi" };  // size:10, value:"hi"

//     cout << "v1 size :" << v1.size() << endl;
// 	cout << "v2 size :" << v2.size() << endl;
// 	cout << "v3 size :" << v3.size() << endl;
// 	cout << "v4 size :" << v4.size() << endl;
// 	cout << "v5 size :" << v5.size() << endl;
// 	cout << "v6 size :" << v6.size() << endl;
// 	cout << "v7 size :" << v7.size() << endl;

//     cout << "v1 content : ";
//     for(auto i:v1){
//         cout<<i<<", ";
//     }
//     cout<<endl;
//     cout << "v2 content : ";
//     for(auto i:v2){
//         cout<<i<<", ";
//     }
//     cout<<endl;

//     return 0;

// }
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

// void check_and_print(const vector<int>& vec)
// {
// 	cout << "size: " << vec.size() << "  content: [";
// 	for (auto it = vec.begin(); it != vec.end(); ++it)
// 		cout << *it << (it != vec.end() - 1 ? "," : "");
// 	cout << "]\n" << endl;
// }

// void check_and_print(const vector<string>& vec)
// {

// 	cout << "size: " << vec.size() << "  content: [";
// 	for (auto it = vec.begin(); it != vec.end(); ++it)
// 		cout << *it << (it != vec.end() - 1 ? "," : "");
// 	cout << "]\n" << endl;
// }

// int main(){
// 	vector<int> v1;
// 	vector<int> v2(10);
// 	vector<int> v3(10, 42);
// 	vector<int> v4{ 10 };
// 	vector<int> v5{ 10, 42 };
// 	vector<string> v6{ 10 };
// 	vector<string> v7{ 10, "hi" };
//     check_and_print(v2);
//     //...
//     return 0;

// }
// int main(){
//     vector<string> text;
// 	text.push_back("aaaaaaaaaa aaaaaaaaa aaaaaa");
// 	text.push_back("");
// 	text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbbbbbbbb");
//     for(auto it = text.begin(); it != text.end()&&!it->empty(); ++it){
//         for(auto & i:*it){
//             if(isalpha(i)){
//                 i = toupper(i);
//             }
//         }
//     }
//     for (auto it : text)
// 	{
// 		cout << it << endl;
// 	}
// 	return 0;
// }


// int main(){
//     vector<int> v(10,32);
//     for(auto it =v.begin(); it !=v.end();++it){
//         *it = *it * 2;
//     }
//     for(auto i:v) 
//         cout<<i<<" "<<endl;
//     return 0;
// }

int main(){
    short value = 32767;
    value = value +5;
    cout<<value<<endl;
    return 0;
}                                                                                                                                                              