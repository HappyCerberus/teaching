class Base
{
public:
	virtual void metoda() = 0;
};

class Derived : public Base
{
public:
	virtual void methoda() override;
};

class Final : public Base
{
public:
	virtual void metoda() final;
};

class Broken : public Final
{
public:
	virtual void metoda();
};

int main()
{
	return 0;
}
