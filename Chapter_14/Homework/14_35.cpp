#include <string>
#include <iostream>
using namespace std;

class GetLine{
public:
    GetLine(istream& i=cin):is(i) {}
    string operator()() const {
        string str;
        getline(is, str);
        // is>>str;// 不能读取一行，只可以读取一个字符串
        return is?str:string("");
    }


private:
    istream& is;
};


int main(){
    GetLine gs;
    string cstr = gs();
    cout<<cstr<<endl;
}