#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> x = { 10, 20, 30, 40 };
	for (auto i : x)
	{
		cout << i << endl;
	}

	return 0;
}
