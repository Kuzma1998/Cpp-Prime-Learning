#include<memory>
#include<string>
#include<utility>
using namespace std;


class StrVec{
private:
// 工具函数，被拷贝构造函数、赋值运算符和析构函数所使用
    pair<string*,string*> alloc_n_copy(const string*,const string*);
    void free();//销毁元素释放内存
    void chk_n_alloc(){
        if(size()==capacity())
            reallocate();
    }
    void reallocate();
    void alloc_n_move(size_t new_cap);
    // void range_initialize(const string*,const string*);

    string* elements;//第一个元素
    string* first_free;//尾后元素
    string* cap;
    allocator<string> alloc;//分配若干个string内存的alloc对象

public:
    StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(const StrVec&);
    // StrVec(ini)
    StrVec& operator=(const StrVec&);
    ~StrVec();

    void push_back(string&);
    size_t size() const {return first_free-elements;}
    size_t capacity() const {return cap-elements;}
    string* begin() const {return elements;}
    string* end() const {return first_free;}
};