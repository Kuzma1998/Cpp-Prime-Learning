#ifndef CPP_CH15_3
#define CPP_CH15_3

#include<string>
using namespace std;
class Quote
{
public:
	Quote() = default;
	Quote(const std::string &b, double p) :
		bookNo(b), price(p)
	{}

	std::string     isbn() const { return bookNo; }
	virtual double  net_price(std::size_t n) const { return n * price; }

	virtual ~Quote() = default;

private:
	std::string bookNo;

protected:
	double  price = 0.0;

};

#endif