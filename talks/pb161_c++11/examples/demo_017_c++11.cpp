#include <future>
#include <iostream>
using namespace std;

void test(int x) { cout << x << endl; }

int main()
{
	int x = 10;

	future<void> a = async(launch::async,test,x);

	future<void> b = async(launch::deferred,test,ref(x));

	future<void> c = async(launch::deferred,[&x](int y) { cout << x << " vs " << y << endl; },x);

	x = 12;

	a.get();
	b.get();
	c.get();
	return 0;
}
