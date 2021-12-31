/*
 * @Descripttion: 
 * @version: 
 * @Author: Li Jiaxin
 * @Date: 2021-09-08 21:21:11
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2021-12-31 12:56:22
 */
#include <iostream>
#include <string>
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

using std::cout;
using std::endl;
using std::string;
using std::vector;

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

// int main(){
//     short value = 32767;
//     value = value +5;
//     cout<<value<<endl;
//     return 0;
// }

// int main(){
//     const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
//     const char *cp = ca;
//     while (*cp) {
//     cout << *cp << endl;
//     ++cp;
// }
//     return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;

const char s1[] = "hello";

const char s2[] = "world";

// int main(){
//     char s3[1000];

//     strcpy(s3,s1);
//     strcat(s3,s2);
//     cout<<s3<<endl;
//     cout<<s1<<endl;
//     cout<<s2<<endl;
//     // if(s1<s2){
//     //     cout<<s1<<endl;
//     // }
//     cout<<typeid(s1).name()<<endl;
//     // int n = 100;
//     // const type_info &nInfo = typeid(n);
//     // cout<<nInfo.name()<<endl;

//     // string str = "lol",*p = &str;
//     // cout<<*p << endl;
//     const type_info &charInfo = typeid(char);
//     cout<<charInfo.name()<<endl;
//     return 0;
// }

// int main(){
//     int x[10]={0,1,2,3,4,5,6,7,8,9};
//     int *p = x;
//     cout<<sizeof(p)/sizeof(*p)<<endl;
//     cout<<x<<endl;
//     return 0;
// }

// int main()
// {
//     // vector<int> t = {1,1,1};
//     // string s="adasdasdi";
//     // cout<<sizeof(s)<<endl;
//     // cout<<t.capacity()<<endl;
//     cout << sizeof(int) << endl;
//     cout << sizeof(char) << endl;
//     cout << sizeof(double) << endl;
//     cout << sizeof(float) << endl;
//     cout << sizeof(bool) << endl;
//     cout<<sizeof(int*)<<endl;
//     return 0;
// }

#include <iostream>
#include <stdexcept>

// int main()
// {
//     int i, j;
//     std::cin >> i >> j;
//     if (j == 0)
//         throw std::runtime_error("divisor is 0");
//     std::cout << i / j << std::endl;

//     return 0;
// }

// using std::cin; using std::cout; using std::endl; using std::runtime_error;

// int main(void)
// {
//     for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
//     {
//         try
//         {
//             if (j == 0)
//                 throw runtime_error("divisor is 0");
//             cout << i / j << endl;
//         }
//         catch (runtime_error err)
//         {
//             cout << err.what() << "\nTry again? Enter y or n" << endl;
//             char c;
//             cin >> c;
//             if (!cin || c == 'n')
//                 break;
//         }
//     }

//     return 0;
// }

// int main(){
//     int a[5] = {1,2,3,4,5};
//     int *p = a;
//     int *q = (int*)(&a+1);
//     int *r = (int*)(&a);
//     cout<<*(p+1)<<" "<<*(q-1)<<endl;
//     cout<<*(r+1)<<endl;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     return 0;
// }

// int main()
// {
//     int n = 0, i = 42;
//     int *p = &n, *q = &i;
//     cout << *p << " " << *q << endl;
//     *p = 42;
//     // p = q;
//     cout << *p << " " << *q << endl;
//     cout<<n<<endl;
//     return 0;
// }


// #include <initializer_list>

// int sum(const std::initializer_list<int>& il)
// {
//     int sum = 0;
//     for (auto i : il) sum += i;
//     return sum;
// }

// int main(void)
// {
//     auto il = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//     std::cout << sum(il) << std::endl;

//     return 0;
// }

// char &get_val(string& str,string::size_type ix){
//     return str[ix];
// }

// int main(){
//     string s("hi");
//     get_val("hi",0) = 'x';
//     cout<<s<<endl;
//     return 0;
// }

// int main(){
//     unsigned short a ;
//     short b;
//     int max_val = INT_MAX;
//     a =32768;
//     b=a;
//     // printf("%d %d\n",a,b);
//     cout << sizeof( unsigned int) << endl;
//     cout<<max_val << endl;
//     cout<<max_val+1 << endl;
//     return 0;
// }

// int main(){
//     char* str = "hello";
//     cout<<*(str+4)<<endl;
//     return 0;

// }

class A{
public:
    int a;
    A() = default;
    A(int num): a(num) {}
};

int main(){
    A obj;
    cout<<obj.a<<endl; 
    A obj2(3);
    cout<<obj2.a<<endl; 
}

