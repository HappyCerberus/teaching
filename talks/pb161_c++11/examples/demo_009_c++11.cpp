#include <tuple>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

tuple<string,string,unsigned> get_info()
{
	return make_tuple(string("Franta"), string("Novak"), 1972);
}

int main()
{
	auto user = get_info();
	cout << setw(8) << "Name " << ": " << get<0>(user) << endl;
	cout << setw(8) << "Surname " << ": " << get<1>(user) << endl;
	cout << setw(8) << "Year " << ": " << get<2>(user) << endl;
}
