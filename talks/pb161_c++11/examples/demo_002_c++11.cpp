#include <vector>
#include <string>
using namespace std;

int main()
{
	string s1 = "abc";			// OK
	string s2 = string{"abc"};		// OK
	string *s3 = new string{};		// OK
	string s4{};				// OK

	int x[] = { 1, 2, 3, 4, 5 };		// OK
	vector<int> y = { 1, 2, 3, 4, 5 };	// OK
}
