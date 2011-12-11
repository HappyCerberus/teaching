template < typename T >
class Base
{
};

class Derived : public Base<Derived>
{
};

int main()
{
	Derived x;
	Base<Derived> *y = &x;
}
