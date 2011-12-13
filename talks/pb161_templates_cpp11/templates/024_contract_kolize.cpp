#include <iostream>
using namespace std;

class A
{
	public:
		void print() { cout << "Class A..." << endl; }
};

class B
{
	public:
		void print() { cout << "Class B..." << endl; }
};

class C : public A, public B {};

int main()
{
	C x;
	x.print();
}
