#include <iostream>
using namespace std;

int main()
{
	void (*f)(int) = [](int x) { cout << x << endl; };
	f(20);

//	void (*g)(int) = [&](int x) { cout << x << endl; };

	auto g = [&](int x) { cout << x << endl; };
	g(20);
}
