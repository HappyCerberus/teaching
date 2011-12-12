#include <memory>
#include <iostream>
using namespace std;

int main()
{
	{
		shared_ptr<int> a(new int(10));
		shared_ptr<int> b = a;
		cout << *a << "--" << *b << endl;
	}

	return 0;
}
