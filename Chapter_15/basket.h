#ifndef basketball
#define basketball

#include<set>
#include "quote.h"
#include<memory>

class Basket{
private:

    static bool compare(const std::shared_ptr<Quote>& lhs,
    const std::shared_ptr<Quote>& rhs){
        return lhs->isbn()<rhs->isbn();
    }
    // 模板里面得是类型名，传入一个shared_ptr<Quote>类和返回xxx类型的函数
    std::multiset<std::shared_ptr<Quote>,decltype(compare)*> items
    {compare}; 
    // decltype(compare) 返回函数类型，decltype(compare)*返回函数类型的指针
    // 花括号代表用compare函数作为比较的函数
public:
    void add_item(const Quote& sale){
        items.insert(std::shared_ptr<Quote>(sale.clone()));
    }
    void add_item(Quote&& sale){
        items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
    }
    double total_receipt(std::ostream& os) const;

};

#endif //