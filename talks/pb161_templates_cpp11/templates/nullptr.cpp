#include <iostream>
using namespace std;

void fce(int x) {}
void fce(char* x) {}

int main()
{
	//fce(NULL);
	fce(nullptr);

	int c = nullptr;

	return 0;
}
