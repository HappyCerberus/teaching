#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
using namespace std;

atomic<int> notification;

void notify()
{
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Notified the main thread" << endl;
	notification = 1;
}

int main()
{
	thread(notify).detach();

	notification = 0;
	while (notification == 0)
	{
		this_thread::sleep_for(chrono::seconds(1));
		cout << "Waiting for notification" << endl;
	}

	cout << "Notification recevied" << endl;

	return 0;
}
