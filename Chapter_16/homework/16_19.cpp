#include<iostream>
#include<vector>
using namespace std;

template<typename Container>
void print(const Container& c){
    for(typename Container::size_type i=0; i!=c.size();++i){
        cout<<c[i]<<" ";
    }
}


int main(){
    vector<int> v{0,1, 2,3,4,5,6,7};
    print(v);
}