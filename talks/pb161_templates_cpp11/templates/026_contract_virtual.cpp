#include <iostream>
using namespace std;

class A { public: int value; };
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main()
{
	D x;
	x.B::value = 3;
	x.C::value = 4;

	cout << "B: " << x.B::value << " C: " << x.C::value << endl;

	return 0;
}
