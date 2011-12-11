template<bool C, typename T1, typename T2>
class IfThenElse
{
        public:
                typedef T2 Result;
};

template<typename T1, typename T2>
class IfThenElse<true, T1, T2>
{
        public:
                typedef T1 Result;
};


template<int N, int LO=1, int HI=N>
class Sqrt
{
        public:
                static const int mid = (LO+HI+1)/2;

                typedef typename IfThenElse<(N<mid*mid),
                        Sqrt<N,LO,mid-1>, Sqrt<N,mid,HI> >::Result Sub;

                static const int result = Sub::result;
};


template<int N, int S>
class Sqrt<N, S, S>
{
        public:
                static const int result = S;
};

#include <iostream>
using namespace std;

int main()
{
        cout << "sqrt(45) = " << Sqrt<45>::result << endl;
}
