template < int x > struct Factorial
{
        static const int value = x * Factorial<x-1>::value;
};

template <> struct Factorial<0>
{
        static const int value = 1;
};

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int pole[Factorial<sizeof(int)*CHAR_BIT/8>::value];

	cout << Factorial<sizeof(int)*CHAR_BIT/8>::value << endl;

	return 0;
}
