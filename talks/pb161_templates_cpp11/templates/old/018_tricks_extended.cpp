template < typename T >
class Trida
{
	T data;
	public:
		unsigned length() { return data.length(); }
		unsigned size() { return data.size(); }
};

#include <vector>
#include <string>
using namespace std;

int main()
{
	Trida< vector<int> > t1;
	Trida< string > t2;

	t1.size();
	t2.length();
	// t1.length();
	t2.size();

	return 0;
}
