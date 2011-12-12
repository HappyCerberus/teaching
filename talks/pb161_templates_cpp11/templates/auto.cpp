#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> x = { 10, 20, 30, 40 };
	for (auto i = begin(x); i != end(x); i++)
	{
		cout << *i << endl;
	}

	return 0;
}
