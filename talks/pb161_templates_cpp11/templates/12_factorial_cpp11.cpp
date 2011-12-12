constexpr unsigned long int factorial(unsigned long int var)
{
	return var <= 1 ? 1 : var*factorial(var-1);
}

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int pole[factorial(sizeof(int)*CHAR_BIT/8)];

	cout << factorial(sizeof(int)*CHAR_BIT/8) << endl;

	return 0;
}
