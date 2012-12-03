#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);
	generate(v.begin(), v.end(), []() { return 10; });

	for (auto x : v) { cout << x << ", "; }
	cout << endl;

	int a = 10, b = 20;

	generate(v.begin(), v.end(), [=]() { return a*b; });

	for (auto x : v) { cout << x << ", "; }
	cout << endl;

	generate(v.begin(), v.end(), [&]() { ++a; return a*b; });

	for (auto x : v) { cout << x << ", "; }
	cout << endl;
}
