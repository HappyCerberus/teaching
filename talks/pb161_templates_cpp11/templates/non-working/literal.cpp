#include <iostream>
using namespace std;

class Bytes
{
unsigned long int p_bytes;

public:
	Bytes(unsigned long int b) : p_bytes(b) {}

	unsigned long int bits()
	{ return p_bytes*8; }

	unsigned long int bytes()
	{ return p_bytes; }

	unsigned long int kB()
	{ return p_bytes/1024; }

	unsigned long int MB()
	{ return p_bytes/(1024*1024); }

	unsigned long int GB()
	{ return p_bytes/(1024*1024*1024); }
};

Bytes operator "" B(unsigned long int bytes)
{ return Bytes(bytes); }

Bytes operator "" kB(unsigned long int kbytes)
{ return Bytes(kbytes*1024); }

int main()
{
	cout << (1024kB).bits() << endl;
	cout << (1024B).bits() << endl;

	return 0;
}
