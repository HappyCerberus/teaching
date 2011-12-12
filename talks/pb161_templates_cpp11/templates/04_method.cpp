#include <iostream>
using namespace std;

class Trida
{
public:

	template < typename T >
	void metoda(T hodnota)
	{
		cout << hodnota << endl;
	}
};

int main()
{
	Trida x;

	x.metoda(10);
	x.metoda(2.5);

	return 0;
}
