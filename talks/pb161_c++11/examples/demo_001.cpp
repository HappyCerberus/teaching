#include <iostream>
using namespace std;

struct Int
{
	int value;
};

int get_value(int x) { return x; }

int get_value(Int* x)
{
	if (x == NULL) return 0;

	return x->value;
}

int main()
{
	Int *a = new Int;
	a->value = 10;

	int b = 15;

	cout << "A = " << get_value(a) << " B = " << get_value(b) << endl;

	a = NULL;
	cout << "A (null) = " << get_value(a) << endl;

#ifdef TEST
	cout << "(null) = " << get_value(NULL) << endl;
#endif
}
