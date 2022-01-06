/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 10:25:26
 */
// > 定义你自己的使用引用计数版本的 HasPtr。
#include <string>
using namespace std;

class HasPtr{
    
private:
    string *ps;
    int i;
    size_t *use;
public:
    HasPtr(const string &s = string()): ps(new string(s)),i(0),use(1) {}
    HasPtr(const HasPtr &other): ps(other.ps),i(other.i),use(other.use) {++use;}
    HasPtr& operator=(const HasPtr &other){
        ++*other.use; // 递增other的use
        if(--*use == 0){  //递减自身的use，若为0则释放内存
            delete ps;
            delete use;
        }
        ps = other.ps;
        i = other.i;
        use = other.use;
        return *this;
    }
    ~HasPtr(){
        if(--use == 0){
            delete ps;
            delete use;
        }
    }
};