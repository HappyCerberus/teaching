#include <iostream>
using namespace std;

class A
{
	public:
		A() { cout << "Konstruktor A." << endl; }
		~A() { cout << "Destruktor A." << endl; }
};

class B
{
	public:
		B() { cout << "Konstruktor B." << endl; }
		~B() { cout << "Destruktor B." << endl; }
};

class C : virtual public B
{
	public:
		C() { cout << "Konstruktor C." << endl; }
		~C() { cout << "Destruktor C." << endl; }
};

class D : virtual public B
{
	public:
		D() { cout << "Konstruktor D." << endl; }
		~D() { cout << "Destruktor D." << endl; }
};

class E : public A, public C, public D
{
	public:
		E() { cout << "Konstruktor E." << endl; }
		~E() { cout << "Destruktor E." << endl; }
};

int main()
{
	E x;
}
