#include<vector>
#include<iostream>
using namespace std;


class X
{
vector<int> p_data;

public:
	X(std::initializer_list<int> list) : p_data(list) {}
};

class Trida
{
public:
	Trida(int x) { }
	Trida() : Trida(20) { }

	explicit operator int() { return 10; }
};

int main()
{
	Trida x{};
	Trida y{20};

	X z{10,20,30};

	int a = x;
}
