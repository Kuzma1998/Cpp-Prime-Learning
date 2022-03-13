#include<iostream>
using namespace std;


 int hammingWeight(uint32_t n) {
        int ret = 0;
        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                ret++;
            }
        }
        return ret;
    }


int main(){
    int n=11;
    cout<<hammingWeight(n);
    
}