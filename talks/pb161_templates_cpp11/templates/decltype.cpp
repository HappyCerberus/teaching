
int metoda(int x, double y)
{
	decltype(x+y) z;
	z = x+y;
}

int main()
{
	decltype(metoda) z;
}

