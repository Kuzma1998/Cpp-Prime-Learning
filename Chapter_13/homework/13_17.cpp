/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 21:03:11
 */

// > 分别编写前三题中所描述的 numbered 和 f，验证你是否正确预测了输出结果。

#include<iostream>
#include<string>
using namespace std;

class numbered{
public:
    int mysn;
    static int unique; //
    numbered(){
        mysn = unique++;
    }
    numbered(const numbered& num){
        mysn = unique++;
    }
};

int numbered:: unique =10;

// void f(numbered s){
//     cout<<s.mysn<<endl;
// }

void f(const numbered& s){
    cout<<s.mysn<<endl;
}

int main(){
    numbered a,b=a,c=b;
    f(a);
    f(b);
    f(c);
}