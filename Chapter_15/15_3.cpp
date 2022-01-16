#include "15_3.h"
#include<iostream>
#include <string>
using namespace std;

double print_total(ostream& os,const Quote& item,size_t n){
    double ret = item.net_price(n);
    os <<"ISBN: "<<item.isbn()<<" "<<"total price: "<<ret<<endl; return ret; //
}

int main(){
    size_t n=10;
    double price = 79.8;
    string bkn = "CPP prime";
    // Quote q1;
    Quote quote(bkn,price);
    double total = print_total(cout,quote,n);

}