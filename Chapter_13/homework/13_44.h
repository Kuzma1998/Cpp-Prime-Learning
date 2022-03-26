#ifndef String_h
#define String_h

#include<memory>
#include<utility>
using namespace std;

class String{
public:
    String():String(""){}
    String(const char*);
    String(const String&);
    String& operator=(const String&);
    ~String();

    const char* c_str() const {return element;}//const 代表常量类也可以调用
    size_t size() const {return end-element;}//
    size_t length() const {return end-element+1;}

private:
    pair<char*,char*> alloc_n_copy(const char*, const char*);
    void free();
    void range_initializer(const char* start, const char*);
    
    char* element;
    char* end;
    allocator<char> alloc;// 可以分配char类型的内存


};

#endif 















#endif
>>>>>>> 222
