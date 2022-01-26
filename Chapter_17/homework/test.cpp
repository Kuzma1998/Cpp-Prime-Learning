#include<iostream>
#include<string>
#include<cmath>
#include<random>
#include<vector>
using namespace std;

int main(){
    // default_random_engine e;
    // normal_distribution<> u(4,1.5);
    // vector<unsigned> vec(9);
    // for(int i=0; i!=200;++i){
    //     auto ele = lround(u(e));
    //     if(ele<vec.size())
    //         vec[ele]++;
    // }
    // for(auto j=0;j<vec.size();++j){ //
    //     cout<<j<<": "<<string(vec[j],'*')<<endl;
    // }
    int i;
    while(1){
        // cout<<i<<endl;
        while(cin>>i)
            cout<<i;  
        cout<<flush;
    }

    return 0;

}