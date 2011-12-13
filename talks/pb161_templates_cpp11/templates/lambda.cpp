#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v = { 10, 20, 30, 40 };

	for_each(begin(v),end(v),[](int& x) { x += 3; });

	int c = 15;

	for (auto i : v) cout << i << endl;
	cout << endl;

	for_each(begin(v),end(v),[c](int& x) { x += c; });

	for (auto i : v) cout << i << endl;
	cout << endl;

	int sum = 0;

	for_each(begin(v),end(v),[&sum](int x) { sum += x; });

	cout << sum << endl;

	auto lambda = [](int x) -> int { return x; };
	int (*fce)(int) = lambda;

	// = vsechno hodnotou
	// & vsechno referenci

	return 0;
}

