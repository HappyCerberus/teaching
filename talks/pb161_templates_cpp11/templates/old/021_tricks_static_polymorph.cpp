#include <iostream>
using namespace std;

template < typename Derived >
class Base
{
	public:
		void Interface() 
		{
			static_cast<Derived*>(this)->Implementation(); 
		}
};

class Derived : public Base<Derived>
{
	public:
		void Implementation()
		{
			cout << "Ja jsem potomek..." << endl;
		}
};

int main()
{
	Base<Derived>* x = new Derived;
	x->Interface();

	return 0;
}
