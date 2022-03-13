
#include<iostream>
#include<string.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
    // int sum = 0;
    // for(int i=0;i<=10;++i) sum += i;
    // cout<<"Sum of 1 to 10 is "<<sum<<endl;
    // return 0;
    char a[6] = "hello";//默认会带有一个0在最后
    cout<<strlen(a)<<endl;//计算长度不算0
    cout<<sizeof(a)<<endl;//长度为6
    cout<<sizeof('\n')<<endl;//
    cout<<strlen("/n");

}