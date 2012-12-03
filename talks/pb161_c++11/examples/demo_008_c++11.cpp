#include <array>
#include <iostream>
using namespace std;

int main()
{
	array<int, 3> arr = { 1, 2, 3};
	cout << *arr.begin() << " : " << arr.at(1) << " : " << *(arr.end()-1) << endl;
	cout << "Size: " << arr.size() << endl;
}
