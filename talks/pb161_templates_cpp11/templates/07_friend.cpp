template < typename T >
class A
{
int x;

public:
	A() : x(0) {}

	template < typename X >
	A(const A<X>& d) : x(d.x) {}


	template < typename X >
	friend class A;
};


int main()
{
	A<int> a1;
	A<int> a2(a1);
	A<double> a3(a1);

	return 0;
}
