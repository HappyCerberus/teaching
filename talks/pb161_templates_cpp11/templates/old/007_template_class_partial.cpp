#include <iostream>
using namespace std;

template < typename A, typename B > 
class Test 
{
	public:
		void Print() { cout << "Puvodni sablona" << endl; }
};


template < typename B >
class Test<int,B> 
{
	public:
		void Print() { cout << "Specializace prvniho parametru (int)" << endl; }
};

template < typename B > 
class Test<double,B> 
{
	public:
		void Print() { cout << "Specializace prvniho parametru (double)" << endl; }
};

template < > 
class Test<double,int> 
{
	public:
		void Print() { cout << "Uplna specializace" << endl; }
};

int main()
{
	Test<char,int> x1;
	Test<int,char> x2;
	Test<double,char> x3;
	Test<double,int> x4;
	Test<int,double> x5;

	x1.Print(); 
	x2.Print();
	x3.Print(); 
	x4.Print();
	x5.Print();

	return 0;
}
