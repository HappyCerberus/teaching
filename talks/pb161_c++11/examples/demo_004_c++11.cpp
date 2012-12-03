#include <iostream>
using namespace std;

int main()
{
	int data[3][3] = {{ 1, 2, 3 }, { 11, 12, 13 }, { 21, 22, 23 }};

	int pos_x = 1;
	int pos_y = 1;

	for (auto x : { make_pair(1,0), make_pair(-1,0), make_pair(0,1), make_pair(0,-1) })
	{
		cout << data[pos_x + x.first][pos_y + x.second] << endl;
	}
}
