/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-08 09:40:29
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void test(){
    int i=10;
    auto f = [&]()->bool{
        cout<<i<<endl;
        return i--;};

    while(true){
        if(f()){
            f();
        }
        else{
            break;
        }
    }
}

int main(){
    test();
}