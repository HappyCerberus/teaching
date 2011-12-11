#include <iostream>
using namespace std;

#define square(x) ((x)*(x))

template <typename T>
T square2(T value)
{ return value * value; }

int main()
{
	int x = 10;
	cout << square(++x) << endl;

	x = 10;
	cout << square2(++x) << endl;

	return 0;
}
