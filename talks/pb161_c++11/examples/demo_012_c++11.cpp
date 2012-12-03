#include <iostream>
#include <chrono>
using namespace std;

int fibonacci(int n)
{
	if (n < 3) return 1;

	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	chrono::time_point<chrono::high_resolution_clock> start, end;
	start = chrono::system_clock::now();
	int result = fibonacci(42);
	end = chrono::system_clock::now();

	int elapsed_seconds = chrono::duration_cast<chrono::nanoseconds>(end-start).count();

	time_t end_time = chrono::system_clock::to_time_t(end);

	cout << "finished computation at " << ctime(&end_time) << "elapsed time: " << elapsed_seconds << "ns\n";
}
