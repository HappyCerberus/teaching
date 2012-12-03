#include <iostream>
#include <memory>
using namespace std;

class X
{
public:
	X() { cout << "Constructed X" << endl << endl; }
	~X() { cout << "Destroyed X" << endl << endl; }
};

int main()
{
	cout << "Before block" << endl << endl;
	{
		cout << "Block begin" << endl << endl;
		unique_ptr<X> ptr = unique_ptr<X>(new X);
		cout << "Block end" << endl << endl;
	}
	cout << "After block" << endl << endl;
}