#include <functional>
#include <iostream>
using namespace std;

int poly(int a, int b, int c)
{
	return a * b + c;
}

int main()
{
	using namespace placeholders;

	auto f1 = bind(poly,10,_1,5);
	auto f2 = bind(poly,10,_2,_1);
	
	cout << f1(3) << endl;
	cout << f2(3,2) << endl;
}