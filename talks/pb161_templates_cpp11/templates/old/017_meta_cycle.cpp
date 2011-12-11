template < int cycleCount, class Functor >
struct  StaticCycle
{
        public:
                static void Call()
                {
                        Functor::call();
                        StaticCycle<cycleCount-1,Functor>::Call();
                }
};

template < class Functor >
struct StaticCycle<0,Functor>
{
        public:
                static void Call() { } // prazdne
};

#include <iostream>
using namespace std;

class Printer
{
	public:
		static void call() { cout << "Called..." << endl; }
};

int main()
{
	StaticCycle<10,Printer>::Call();

	return 0;
}