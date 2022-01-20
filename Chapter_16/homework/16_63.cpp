// 定义一个函数模版，统计一个给定值在一个vecor中出现的次数。
// 测试你的函数，分别传递给它一个double的vector，
// 一个int的vector以及一个string的vector。
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

template<typename T>
// size_t get_number(T t, vector<T> const& v)
size_t get_number(T t, const vector<T>& v){
    size_t n =0;
    auto iter = v.begin();
    do{
        iter = find(iter,v.end(),t);
        if(iter!=v.end()){
            ++n;++iter;
        }
    }while(iter!=v.end());
    return n;
}

// size_t get_number(const char* p, const std::vector<std::string> &vt)
// {
//     size_t n = 0;
//     auto iter = vt.begin();
//     std::string s(p);

//     do{
//         iter = std::find(iter, vt.end(), s);
//         if(iter != vt.end())
//         {
//             ++n;
//             ++iter;
//         }
//     }while(iter != vt.end());
//     return n;
// }

template <>
size_t get_number(const char* t, std::vector<const char*> const &vt)
{
    size_t n = 0;
    auto iter = vt.begin();

    do{
        iter = std::find(iter, vt.end(), t);
        if(iter != vt.end())
        {
            ++n;
            ++iter;
        }
    }while(iter != vt.end());
    return n;
}

int main()
{
    std::vector<double> vd = {1, 2, 3, 3.14, 4, 3.14, 5, 6.28};
    std::vector<int> vi = {1, 2, 3, 3, 4, 3, 5, 6};
    std::vector<std::string> vs = {"a", "bb", "ccc", "dddd"};
    std::vector<const char*> vcp = {"a", "bb", "ccc", "dddd"};

    std::cout << get_number(3.14, vd) << std::endl;
    std::cout << get_number(3, vi) << std::endl;
    std::cout << get_number(string("a"), vs) << std::endl;
    std::cout << get_number("a", vcp) << std::endl;

    return 0;
}
