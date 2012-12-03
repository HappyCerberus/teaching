#include <iostream>
using namespace std;

struct Int
{
	int value;
};

int get_value(int x) { return x; }

int get_value(Int* x)
{
	if (x == nullptr) return 0;

	return x->value;
}

int main()
{
	Int *a = new Int;
	a->value = 10;

	int b = 15;

	cout << "A = " << get_value(a) << " B = " << get_value(b) << endl;

	a = nullptr;
	cout << "A (null) = " << get_value(a) << endl;

	cout << "(null) = " << get_value(nullptr) << endl;
}
