/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 21:45:59
 */
/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-04 21:38:27
 */

#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    int ID;
    static int unique;// 类外定义类内声明
    string Name;
    Employee(){
        ID = unique++;
    }
    Employee(const string& name){
        ID = unique++;
        Name = name;
    }
    Employee(const Employee& other) =delete;
    Employee& operator=(const Employee& other) =delete;

};

int Employee:: unique=100;

void f(Employee e){
    cout<<e.ID<<" "<<e.Name<<endl;
}


int main(){
    Employee e(string("LJX"));
    cout<<e.ID<<" "<<e.Name<<endl;
    Employee e1(string("LJX"));
    cout<<e1.ID<<" "<<e1.Name<<endl;
    // f(e);
    // Employee e1 =e;
    // f(e1);
}