#include <functional>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	vector<int> x(arr,arr+5);
	
	vector<int> y(5);
	transform(x.begin(),x.end(),y.begin(),bind1st(plus<int>(),10));
	
	for (size_t i = 0; i < 5; i++)
	{ cout << y[i] << " "; }
	cout << endl;

	vector<int> z(5);
	transform(x.begin(),x.end(),z.begin(),bind2nd(minus<int>(),5));
	
	for (size_t i = 0; i < 5; i++)
	{ cout << z[i] << " "; }
	cout << endl;	
}
