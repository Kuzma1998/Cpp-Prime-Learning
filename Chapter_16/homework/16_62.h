#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<string>
#include<iostream>
using namespace std;

struct Sales_data;

istream& operator>>(istream& is,Sales_data& item);
ostream& operator<<(ostream& os,const Sales_data& item);
Sales_data operator+(const Sales_data& lhs,const Sales_data& rhs);

struct Sales_data{
    friend ostream& operator<<(ostream& os,const Sales_data& item);
    friend istream& operator>>(istream& is,Sales_data& item);
    friend Sales_data operator+(const Sales_data& lhs,const Sales_data& rhs);
    friend bool operator==(const Sales_data& lhs,const Sales_data& rhs);
    friend class std::hash<Sales_data>;
private:
    inline double avg_price() const; //
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
public:
    Sales_data(const string& s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p){
        cout<<"Sales_data(const string& s,unsigned n,double p)"<<endl;
    }
    //默认构造函数采用委托构造函数的方式
    Sales_data():Sales_data("",0,0.0) {
        cout<<"Sales_data(): Sales_Data(\"\",0,0.0)"<<endl;
    }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0){
        cout << "Sales_data(const std::string &s) : Sales_data" << endl;
    }
    // 先委托默认构造函数，再输入改变
    Sales_data(std::istream &is) : Sales_data(){
        is >> *this;
        cout << "Sales_data(std::istream &is) : Sales_data()" << endl;
    }
    Sales_data(const Sales_data &s):bookNo(s.bookNo),units_sold(s.units_sold),revenue(s.revenue){
        cout<<"copy construct"<<endl;
    }

    Sales_data& operator=(const string&);
    Sales_data& operator+=(const Sales_data&);
    Sales_data& operator-=(const Sales_data&);
    string isbn() const { return bookNo; }
};

inline double Sales_data:: avg_price() const{

    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::operator=(const string& s){
    *this = Sales_data(s);
    return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data& Sales_data::operator-=(const Sales_data& rhs){
    units_sold -= rhs.units_sold;
    revenue -= rhs.revenue;
    return *this;
}

istream& operator>>(istream& is,Sales_data& item){
    double price = 0.0;
    is>>item.bookNo>>item.units_sold>>price;
    if(is)
        item.revenue = price * item.units_sold;
    else
        item = Sales_data();
    return is;
}

ostream& operator<<(ostream& os,const Sales_data& item){
    os<<item.isbn() << " " << item.units_sold << " " <<item.revenue<<endl;
    return os;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum += rhs;

    return sum;
}

bool operator==(const Sales_data &lhs, const Sales_data &rhs){
    return lhs.isbn() == rhs.isbn() && 
        lhs.units_sold == rhs.units_sold && 
        lhs.revenue == rhs.revenue;
}

#endif //
