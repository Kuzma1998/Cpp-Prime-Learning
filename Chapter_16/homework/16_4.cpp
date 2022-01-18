#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<typename Iterator, typename Value>
Iterator Find(Iterator first, Iterator last, const Value& v)
{
	for ( ; first != last && *first != v; ++first);
	return first;
}

int main(){
    vector<int>  v = {1,2,3,4,5,6,7,8};
    int val =3;
    // auto it = Find(v.begin(), v.end(),val);
    auto it = Find<vector<int>::iterator,int >(v.begin(), v.end(),val);
    cout<<*it<<endl;
    std::sort(v.begin(),v.end())
}                           