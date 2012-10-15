#include <iostream>
#include <iterator>
using namespace std;

int main()
{
	istream_iterator<int> in(cin);
	istream_iterator<int> eof;

	long suma = 0;
	while (in != eof)
	{
		suma += *in;
		in++;
	}

	cout << "Suma je : " << suma << endl;

	return 0;
}
