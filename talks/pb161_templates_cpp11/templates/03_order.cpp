#include <iostream>
using namespace std;

void Swap(int& left, int& right)
{
	int tmp = left;
	left = right;
	right = tmp;
	cout << "Klasická funkce..." << endl;
}

template <typename T>
void Swap(T& left, T& right)
{
	T tmp(left);
	left = right;
	right = tmp;
	cout << "Šablona funkce..." << endl;
}

template <>
void Swap<double>(double& left, double& right)
{
	double tmp = left;
	left = right;
	right = tmp;
	cout << "Specializace šablony..." << endl;
}

#include <string>
using namespace std;

int main()
{
	int x(10),y(5);
	double a(3.2),b(1.7);
	string i("retezec 1"),j("retezec2");

	Swap(x,y);
	Swap(a,b);
	Swap(i,j);

	return 0;
}
