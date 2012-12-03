#include <iostream>
#include <iomanip>
#include <random>
#include <map>
using namespace std;


int main()
{
	random_device rd;
	mt19937 gen(rd());
//	std::mersenne_twister_engine<uint_fast32_t, 32, 624, 397, 31, 0x9908b0df, 11, 0xffffffff, 7, 0x9d2c5680, 15, 0xefc60000, 18, 1812433253>

	map<int,unsigned> freq;
	uniform_int_distribution<> dis(0,10);
	for (size_t i = 0; i < 5000; i++)
	{
		++freq[dis(gen)];
	}

	for (auto i : freq)
	{
		cout << setw(2) << i.first << " : ";
		for (size_t j = 0; j < (i.second/100); j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	freq.clear();

	normal_distribution<> nrm(5,2);
	for (size_t i = 0; i < 5000; i++)
	{
		++freq[round(nrm(gen))];
	}

	for (auto i : freq)
	{
		cout << setw(2) << i.first << " : ";
		for (size_t j = 0; j < (i.second/100); j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	freq.clear();

	std::poisson_distribution<> poi(4);

	for (size_t i = 0; i < 5000; i++)
	{
		++freq[poi(gen)];
	}

	for (auto i : freq)
	{
		cout << setw(2) << i.first << " : ";
		for (size_t j = 0; j < (i.second/100); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

