#include <memory>
#include <iostream>
using namespace std;

weak_ptr<int> m;
void access_memory()
{
	if (auto shared = m.lock())
	{
		cout << "Valid and containing value \"" << *shared << "\"" << endl;
	}
	else
	{
		cout << "Invalid." << endl;
	}
}

int main()
{
	{
		auto data = make_shared<int>(20);
		m = data;
		access_memory();
	}
	access_memory();
}