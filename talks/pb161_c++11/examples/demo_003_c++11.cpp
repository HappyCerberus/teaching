#include <iostream>
#include <vector>
#include <map>
using namespace std;

template < typename T >
typename T::mapped_type::const_iterator get_first_iter(const T& x)
{
	return x.begin()->second.begin();
}

int main()
{
	map<int, vector<int> > data;
	data.insert(make_pair(0,vector<int>()));
	data[0].push_back(10);

	for (auto i = data.begin(); i != data.end(); i++)
	{
		cout << " { " << i->first << " :: (";

		for (size_t j = 0; j < i->second.size(); j++)
		{
			if (j != 0) cout << ", ";
			cout << i->second[j];
		}

		cout << ") }" << endl;
	}

	auto x = get_first_iter(data);
	cout << "First iter value : " << *x << endl;
}
