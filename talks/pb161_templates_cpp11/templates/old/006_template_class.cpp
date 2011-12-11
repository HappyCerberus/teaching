template <typename T>
class Array
{
	T* data;
	public:
		void Init(int size) { data = new T[size]; }
		void Free() { delete[] data; }

		T operator[] (int index) const { return data[index]; }
		T& operator[] (int index) { return data[index]; }
};

#include<string>
#include<iostream>
using namespace std;

int main()
{
	Array<string> poleStringu;

	poleStringu.Init(3);
	poleStringu[0] = "Hello"; poleStringu[1] = " "; poleStringu[2] = "World!";

	cout << poleStringu[0] << poleStringu[1] << poleStringu[2] << endl;

	poleStringu.Free();

	return 0;
}

