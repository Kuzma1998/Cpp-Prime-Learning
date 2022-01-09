#ifndef CH14_EX14_02_H
#define CH14_EX14_02_H

#include<iostream>
#include<string>
using namespace std;

class Sales_data{
    friend istream& operator>>(istream&, Sales_data&);
    friend ostream& operator<<(ostream&, Sales_data&);
    friend Sales_data operator+(const Sales_data&,const Sales_data&);

public:
    Sales_data(const string& s,unsigned n,double p):bookNo(s), units_sold(n),revenue(p){}
    Sales_data() :Sales_data("",0,0.0f) {}// 委托构造函数
    Sales_data(const string& s):Sales_data(s,0,0.0f) {}
    Sales_data(istream& is):Sales_data(){
        is>>*this;
    }

    Sales_data& operator+=(const Sales_data&);// 定义为成员函数
    string isbn() const { return bookNo; }

private:
    inline double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

istream& operator>>(istream&, Sales_data&);
ostream& operator<<(ostream&, Sales_data&);
Sales_data operator+(const Sales_data&,const Sales_data&);

inline double Sales_data::avg_price() const{
    return units_sold ? revenue/units_sold : 0.0;
}

#endif
