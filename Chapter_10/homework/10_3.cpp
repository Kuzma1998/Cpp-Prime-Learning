/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-07 20:15:15
 */

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8};
    int sum = 0;
    sum = accumulate(v.begin(), v.end(),0);
    cout << sum << endl;
    return 0;
}