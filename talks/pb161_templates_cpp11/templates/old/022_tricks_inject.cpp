template < typename T >
class is_comparable
{
	friend bool operator==(T const &a, T const &b) { return  a.equal_to(b); }
	friend bool operator!=(T const &a, T const &b) { return !a.equal_to(b); }
};

class Our : private is_comparable<Our>
{
	public:
		int x;
		bool equal_to(const Our& o) const { return o.x == x; }
};

#include <iostream>
using namespace std;

int main()
{
	Our a; Our b;
	a.x = 3; b.x = 5;

	cout << boolalpha << "Equal: " << (a == b) << endl;
	cout << boolalpha << "NonEqual: " << (a != b) << endl;
}
