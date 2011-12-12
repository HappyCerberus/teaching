
template < typename X, typename Y >
auto fce(X x, Y y) -> decltype(x+y) { return x+y; }

int main()
{
	int x = 10, y = 20, z;
	z = fce(x,y);
}


