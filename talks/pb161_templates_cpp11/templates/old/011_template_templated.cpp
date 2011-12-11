#include <vector>

template < typename T >
class DynamicArray
{
	private:
		T* p_data;
		int p_size;
	public:
		DynamicArray() : p_data(0), p_size(0) {}
		~DynamicArray() {}

		void Init(int size) 
		{ p_data = new T[size]; p_size = size; }

		void Free() 
		{ delete[] p_data; }

		T operator[] (int index) const 
		{ return p_data[index]; }

		T& operator[] (int index) 
		{ return p_data[index]; }

};

template < typename T, template <typename> class Holder >
class Tester
{
	public:
		Holder<T> first;
		Holder<T> second;

		Tester(int firstSize, int secondSize) : first(), second()
		{ first.Init(firstSize); second.Init(secondSize); }

		~Tester() 
		{ first.Free(); second.Free(); }
};

int main()
{
	Tester<int,DynamicArray> x(3,5);
}
