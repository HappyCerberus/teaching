#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	unordered_map<int,int> freq;
	istream_iterator<int> input(cin);
	istream_iterator<int> eof;

	if (argc == 2 && argv[1] == string("--cifry"))
	{
		for_each(input, eof, [&] (int x)
			{ while (x != 0) { freq[x%10]++; x/=10; } });
	}
	else if (argc == 1)
	{
		for_each(input, eof, [&] (int x)
			{ freq[x]++; });
	}
	else
	{
		cerr << "Tento program ocekava jeden volitelny parametr: \"--cifry\"" << endl;
		return 1;
	}

	cout << "Frekvence:" << endl;
	for(auto i : freq)
	{
		cout << "\"" << i.first << "\"" << " " << i.second << "x" << endl;
	}

	return 0;
}
