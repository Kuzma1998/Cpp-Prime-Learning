#ifndef CPP_CH15_5H
#define CPP_CH15_5H
#include "15_3.h"
class Bulk_quote : public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
		Quote(b, p), min_qty(q), discount(disc)
	{}

	double net_price(std::size_t n) const override;

private:
	std::size_t min_qty = 0;
	double      discount = 0.0;
};

double Bulk_quote::net_price(std::size_t n) const{
	if(n>=min_qty)
		return n*price*discount;
	else
		return n*price;
}

#endif // BULK_QUOTE_H