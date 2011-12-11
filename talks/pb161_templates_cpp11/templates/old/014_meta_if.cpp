template < bool podminka, class IfTrue, class IfFalse >
struct StaticIF
{
        public:
                static void call() { IfFalse::call(); }
};

template < class IfTrue, class IfFalse >
struct StaticIF<true,IfTrue,IfFalse>
{
        public:
                static void call() { IfTrue::call(); }
};

#include <iostream>
using namespace std;

class Prvni
{
	public:
		static void call() { cout << "Prvni..." << endl; }
};

class Druha
{
	public:
		static void call() { cout << "Druha..." << endl; }
};

int main()
{
	StaticIF<sizeof(int) == sizeof(long int), Prvni, Druha >::call();

	return 0;
}
