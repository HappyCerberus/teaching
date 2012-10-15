#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	int pole[] = { 10, 20, 30 };
	ostream_iterator<int> out(cout,", ");

	copy(pole,pole+3,out);

	return 0;
}
