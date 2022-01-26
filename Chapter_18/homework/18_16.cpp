#include<iostream> //
using namespace std;
namespace Exercise{
	int ivar = 0;
	double dvar = 0;
	const int limit = 1000;
}
int ivar = 0;
// int iv =0;
// int iv = 0;
// using Exercise::ivar;	//1
using Exercise::dvar;
using Exercise::limit;

// using namespace Exercise;	//3

void mainp(){
	// using Exercise::ivar;	//2
	// using Exercise::dvar;
	// using Exercise::limit;

	// using namespace Exercise;	//4

	double dvar = 3.1416;
	int iobj = limit + 1;
	++ivar;
	// std::cout<<ivar<<" ";
	++::ivar;
	// int j = ;
	std::cout<<::ivar<<" ";
}

int main()
{   
    mainp();
	return 0;
}