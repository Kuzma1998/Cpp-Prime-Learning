#include<iostream>
#include<bitset>
#include<string>
using namespace std;

template<unsigned N>
class quiz{
    template<unsigned M>
    friend ostream& operator<<(ostream&, const quiz<M>&);
public:
    quiz(string& s): bset(s){}
    void update(size_t n,bool b){
        bset[n] = b;
    }
private:
    bitset<N> bset;
};

template<unsigned M>
ostream& operator<<(ostream& os, const quiz<M>& q){
    os<<q.bset;
    return os;
}


int main()
{
	std::string s1("0101010101");
	std::string s2("0101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101");
	quiz<10> q1(s1);
	// quiz<100> q2(s2);
    std::cout << q1 << std::endl;
	q1.update(1,true);
	std::cout << q1 << std::endl;

	return 0;
}