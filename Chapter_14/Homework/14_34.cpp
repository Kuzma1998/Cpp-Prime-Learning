#include<iostream>
using namespace std;

struct Sanmu{
    int operator()(int a,int b,int c){
        return a?b:c;
    }
};

int main(){
    int a =1,b =2,c =3;
    Sanmu s;
    cout<<s(a,b,c)<<endl;
}