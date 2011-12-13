template < typename T >
void Swap(T& p1, T& p2)
{
	T tmp(p1); p1 = p2; p2 = tmp;
}

template < typename T1, typename T2 >
void Swap2(T1& p1, T2& p2)
{
	T1 tmp = p1; p1 = p2; p2 = tmp;
}

struct MyClass { char *buf; };

template < >
void Swap<MyClass>(MyClass& l, MyClass& r)
{
	char* buf = l.buf;
	l.buf = r.buf;
	r.buf = buf;
}

#include <iostream>
using namespace std;

int main()
{
	int x(3), y(5);
	Swap(x,y);
	cout << "x: " << x << " y: " << y << endl;

	double z(2.5);
	//Swap(y,z);
	Swap2(y,z);
	cout << "y: " << y << " z: " << z << endl;

	return 0;
}
