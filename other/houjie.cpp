#include<iostream>
using namespace std;


struct Base{
    Base(){
        cout<<"Base constructor"<<endl;
    }
};


struct Componet{
    Componet(){
        cout<<"Componet constructor"<<endl;
    }
};

struct Derived : public Base{
public:
    Componet c1;
    Derived(){
        cout<<"Derived constructor"<<endl;
    }
};

void test(){
    Derived d1;
}

int main(){ 
    test();
    return 0;
}
