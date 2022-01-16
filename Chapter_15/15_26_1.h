#ifndef XXX
#define XXX

#include<iostream>
#include<iostream>
using namespace std;

class Quote{
    friend bool operator !=(const Quote& lhs, const Quote& rhs);
private:
	std::string bookNo;

protected:
	double  price = 10.0;

public:
    Quote() {cout<<"default constructing Quote\n";}//默认构造函数
    Quote(const std::string& b,double p ):bookNo(b),price(p) {
        cout<<"Quote: taking two parameters"<<endl;}
    // copy constructor
    Quote(const Quote& q):bookNo(q.bookNo),price(q.price){
        cout<<"Quote: copy constructor"<<endl;
    } 
    // move constructor
    Quote(Quote&& q) noexcept :bookNo(std::move(q.book)),price(std::move(q.price)){
        cout<< "Quote: move constructor"<<endl;
    }

    // 赋值
    Quote& operator=(const Quote& rhs){
        if(*this != rhs){
            bookNo = ths.bookNo;
            price = rhs.price;
        }
        std::cout << "Quote: fuzhi \n";
		return *this;
    }
    
    	// move =
	Quote& operator =(Quote&& rhs)  noexcept
	{
		if (*this != rhs)
		{
			bookNo = std::move(rhs.bookNo);
			price = std::move(rhs.price);
		}
		std::cout << "Quote: move =!!!!!!!!! \n";

		return *this;
	}

    std::string     isbn() const { return bookNo; }
	virtual double  net_price(std::size_t n) const { return n * price; }
	virtual void    debug() const;

	virtual ~Quote()
	{
		std::cout << "destructing Quote\n";
	}

};


bool inline
operator !=(const Quote& lhs, const Quote& rhs)
{
	return lhs.bookNo != rhs.bookNo
		&&
		lhs.price != rhs.price;
}


#endif