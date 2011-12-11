template < int value, class One, class Two, class Default >
struct StaticSwitch
{
        public:
                static void call() { Default::call(); }
};

template < class One, class Two, class Default >
struct StaticSwitch<1,One,Two,Default>
{
        public:
                static void call() { One::call(); }
};

template < class One, class Two, class Default >
struct StaticSwitch<2,One,Two,Default>
{
        public:
                static void call() { Two::call(); }
};

#include <iostream>
using namespace std;

template <int x>
class ValuePrint
{
	public:
		static void call()
		{ cout << "Value " << x << endl; }
};

int main()
{
	StaticSwitch<3,ValuePrint<1>,ValuePrint<2>,ValuePrint<0> >::call();
	return 0;
}