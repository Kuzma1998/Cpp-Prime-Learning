#include "15_3.h"
#include "15_5.h"
// #include "15_3.cpp"
#include <iostream>

double print_total(ostream& os,const Quote& item,size_t n){
    double ret = item.net_price(n);
    os <<"ISBN: "<<item.isbn()<<" "<<"total price: "<<ret<<endl; 
    return ret; //
}


int main(){
    string bkn = "CPP PRIME";
    double price = 88.8;
    size_t q = 15;
    double d = 0.88;
    Quote item1(bkn, price);
    Bulk_quote it1;
    Bulk_quote item2(bkn, price,q,d);
    // print_total(cout,item1,10);
    print_total(cout,item2,18);

}