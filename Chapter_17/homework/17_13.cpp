#include <bitset>
#include <iostream>
using namespace std;
template <unsigned N>
class quiz
{
template <unsigned M>
friend std::ostream &operator<<(std::ostream&, const quiz<M>&);

template <unsigned M>
friend size_t grade(const quiz<M>&, const quiz<M>&);
public:
	quiz(std::string &s) : bset(s) {}
	void update(size_t n, bool b)
	{
		bset[n] = b;
	}
	
private:
	std::bitset<N> bset;
};

template <unsigned M>
std::ostream &operator<<(std::ostream &os, const quiz<M> &q)
{
	os << q.bset;
	return os;
}

template <unsigned M>
size_t grade(const quiz<M> &lhsQ, const quiz<M> &rhsQ)
{   
    cout<<(lhsQ.bset ^ rhsQ.bset)<<endl;//异或
    cout<<(lhsQ.bset ^ rhsQ.bset).flip()<<endl;//改变每一位的状态


	return (lhsQ.bset ^ rhsQ.bset).flip().count();
}

int main()
{
	std::string s1("0101010101");
	std::string s2("0101010100");

	quiz<10> q1(s1);
	quiz<10> q2(s2);


	std::cout << grade(q1, q2) << std::endl;

	return 0;
}