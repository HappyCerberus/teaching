template <typename T>
class operators
{
	friend bool operator == (T const &a, T const &b) { return (a.compare_to(b) == 0); }
	friend bool operator != (T const &a, T const &b) { return (a.compare_to(b) != 0); }
	friend bool operator <  (T const &a, T const &b) { return (a.compare_to(b) == -1); }
	friend bool operator >= (T const &a, T const &b) { return (a.compare_to(b) != -1); }
	friend bool operator >  (T const &a, T const &b) { return (a.compare_to(b) == 1); }
	friend bool operator <= (T const &a, T const &b) { return (a.compare_to(b) != 1); }
};

class Our : private operators<Our>
{
	public:
		int x;
		int compare_to(const Our& o) const
		{
			if (x == o.x) { return 0; }
			
			if (x < o.x) { return -1; }
			
			return 1;
		}
};

#include <iostream>
using namespace std;

int main()
{
	Our a; Our b;
	a.x = 3; b.x = 5;

	cout << boolalpha << "Equal: " << (a == b) << endl;
	cout << boolalpha << "NonEqual: " << (a != b) << endl;
	cout << boolalpha << "Bigger: " << (a > b) << endl;
	cout << boolalpha << "Lesser: " << (a < b) << endl;
}
