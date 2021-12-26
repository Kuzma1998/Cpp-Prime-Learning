/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-26 19:48:11
 */
// > 编写一个程序，从标准输入读取一个字符串，
// 存入一个动态分配的字符数组中。描述你的程序如何处理变长输入。测试你的程序，输入一个超出你分配的数组长度的字符串。

#include<iostream>
#include<string>
using namespace std;

int main(){
    // std::cout << "How long do you want the string to be?"<<endl;
    // int size = 0;
    // cin>>size;
    // auto input = new char[size+1]();
    // cin.ignore();//清空缓冲区,没有此行代码则输入不了字符串
    // cout<<"the input series is: "<<endl; 
    // cin.get(input,size+1);//读取size个字符，遇到回车停止
    // cout<<input<<endl;
    // delete[] input;
    // return 0;
    
    char c1,c2;
    // cin.get(c1); 
    // cin.get(c2);// cin.get();从缓冲区吸收一个字符，包括空格和回车，因此输入c1之后会把空格把c2 
    // cout<<c1<<" "<<c2<<endl;
    // cin>>c1; 
    // cin>>c2;
    // cout<<c1<<" "<<c2<<endl;  //ok,cin>>会把之前缓冲区的空格或者回车先清除

    // cin>>c1;
    // cin.get(c2);
    // cout<<c1<<" "<<c2<<endl; // cin.get()直接把缓冲区的回车或者空格给了c2

    // string s1,s2;
    // getline(cin, s1);
    // getline(cin, s2);
    // cout<<s1<<" "<<s2<<endl; // ok

    char s1[10],s2[10];
    cin.getline(s1,7);// 当s1超过3时，s2直接不能下一步读取
    cin.getline(s2,7);
    cout<<s1<<" "<<s2<<endl;
  
}