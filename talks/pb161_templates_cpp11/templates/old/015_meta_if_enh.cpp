template < bool podminka, class IfTrue, class IfFalse >
struct StaticIF
{
        public:
                static typename IfFalse::Result call(typename IfFalse::Param param)
		{ return IfFalse::call(param); }
};

template < class IfTrue, class IfFalse >
struct StaticIF<true,IfTrue,IfFalse>
{
        public:
                static typename IfTrue::Result call(typename IfTrue::Param param)
		{ return IfTrue::call(param); }
};

#include <iostream>
using namespace std;

class Prvni
{
	public:
		typedef int Result;
		typedef int Param;

		static Result call(const Param& p)
		{ cout << "Prvni..." << p << endl; return 5; }
};

class Druha
{
	public:
		typedef double Result;
		typedef double Param;

		static Result call(const Param& p)
		{ cout << "Druha..." << p << endl; return 2.1; }
};

int main()
{
	cout << StaticIF<true, Prvni, Druha >::call(2) << " "
		<< StaticIF<false, Prvni, Druha >::call(3.4) << endl;

	return 0;
}
