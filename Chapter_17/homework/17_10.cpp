#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

int main(){
    vector<int> vi{1,2,3,5,8,13,21};
    bitset<32> bst;
    for(auto i:vi){
        bst.set(i);
    }
    cout<<bst<<endl;
    return 0;
}