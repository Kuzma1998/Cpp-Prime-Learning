#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <stdexcept>
#include <iostream>

class isbn_mismatch : public std::logic_error
{
public:
    explicit isbn_mismatch(const std::string &s) : std::logic_error(s) {}
    isbn_mismatch(const std::string &s, const std::string &lhs,
                  const std::string &rhs) : logic_error(s), left(lhs), right(rhs) {}
    const std::string left, right;
};

struct Sales_data;

std::istream &operator>>(std::istream &is, Sales_data &item);
std::ostream &operator<<(std::ostream &os, const Sales_data &item);
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);

struct Sales_data
{
    friend std::istream &operator>>(std::istream &is, Sales_data &item);
    friend std::ostream &operator<<(std::ostream &os, const Sales_data &item);
    friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
    friend bool operator==(const Sales_data &lhs, const Sales_data &rhs);
    friend class std::hash<Sales_data>;

private:
    inline double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

public:
    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(p) {}
    Sales_data() : Sales_data("", 0, 0)
    {
        std::cout << "默认构造利用委托构造！" << std::endl;
    }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0){
        std::cout << "Sales_data(const std::string &s) : Sales_data" 
        << std::endl;
    }
    Sales_data(std::istream &is) : Sales_data()
    {
        is >> *this;
        std::cout << "输入构造函数！" << std::endl;
    }
    std::string isbn() const
    {
        return bookNo;
    }
    Sales_data &operator=(const std::string &);
    Sales_data &operator+=(const Sales_data &);
    Sales_data &operator-=(const Sales_data &);
};

inline double Sales_data::
    avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::operator=(const std::string &s)
{
	Sales_data temp(s);
    this->bookNo = temp.bookNo;
    this->revenue = temp.revenue;
    this->units_sold = temp.units_sold;
	return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data &rhs)
{
	if(isbn() != rhs.isbn())
		throw isbn_mismatch("wrong isbns", isbn(), rhs.isbn());
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;
}

Sales_data& Sales_data::operator-=(const Sales_data &rhs)
{
	units_sold -= rhs.units_sold;
	revenue -= rhs.revenue;

	return *this;
}

std::istream &operator>>(std::istream &is, Sales_data &item)
{
	double price = 0;

	is >> item.bookNo >> item.units_sold >> price;
	if(is)
		item.revenue = price * item.units_sold;
	else
		item = Sales_data();

	return is;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();

	return os;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;

	return sum;
}

bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() == rhs.isbn() && 
		lhs.units_sold == rhs.units_sold && 
		lhs.revenue == rhs.revenue;
}
#endif