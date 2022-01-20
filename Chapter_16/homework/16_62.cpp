#include<iostream>
#include<unordered_set>
#include"16_62.h"
using namespace std;


// 往名称空间添加对象
namespace std{
    //特例化一个版本的hash时，必须在名称空间里面特例化
    template<>
    struct hash<Sales_data>{
        typedef size_t result_type;
        typedef Sales_data argument_type;
        size_t operator()(const Sales_data& s) const;
    };
    size_t hash<Sales_data>::operator()(const Sales_data& s) const{
        return hash<string>()(s.bookNo)^
        hash<unsigned>()(s.units_sold)^
        hash<double>()(s.revenue);
    }
}


int main()
{
    Sales_data sales_data1("001-01", 1, 100);
    Sales_data sales_data2;
    Sales_data sales_data3("001-02");
    // Sales_data sales_data4(std::cin);
    // std::cout << sales_data4 << std::endl;
    std::cout << std::hex << std::hash<std::string>()("001-01") << std::endl;
    std::cout << std::hex << std::hash<unsigned>()(1) << std::endl;
    std::cout << std::hex << std::hash<double>()(100) << std::endl;

    std::unordered_multiset<Sales_data> SDset;
    SDset.emplace(sales_data1);
    SDset.emplace("001-03", 1, 200);
    SDset.emplace(sales_data3);

    for(const auto &item : SDset)
        std::cout << "the hash code of " << item.isbn() <<":\n0x" << std::hex << std::hash<Sales_data>()(item) << "\n";

    return 0;
}