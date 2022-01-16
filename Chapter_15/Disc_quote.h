#ifndef DisQuote_h
#define DisQuote_h

#include "15_3.h"

class Disc_quote : public Quote{
public:
    Disc_quote() = default;
    Disc_quote(string& b,double p ,size_t q,double d):Quote(b,p),quantity(q),discount(d) {}
    virtual double net_price(size_t n) const override = 0;
    ~Disc_quote();

private:
    size_t quantity;
    double discount;
};

#endif //