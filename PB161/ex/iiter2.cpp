#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	istream_iterator<double> in(cin);
	istream_iterator<double> eof;
	ostream_iterator<double> out(cout," ");
	vector<double> pole;

	copy(in,eof,back_inserter(pole));

	double suma = 0;
	for (size_t i = 0; i < pole.size(); i++)
	{
		suma += pole[i];
	}

	cout << "Suma cisel : " << endl;

	copy(pole.begin(),pole.end(),out);

	cout << endl << "je : " <<  suma << endl;
	cout << "Prumer je : " << suma / pole.size() << endl;

	return 0;
}
