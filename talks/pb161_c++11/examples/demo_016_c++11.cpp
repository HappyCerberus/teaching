#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

int notification;
mutex notif_mutex;

void notify()
{
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Notified the main thread" << endl;
	notif_mutex.lock();
	notification = 1;
	notif_mutex.unlock();
}

int main()
{
	auto t = thread(notify);
	t.detach();

	notif_mutex.lock();
	notification = 0;
	notif_mutex.unlock();

	while (1)
	{
		this_thread::sleep_for(chrono::seconds(1));
		cout << "Waiting for notification" << endl;

		notif_mutex.lock();
		if (notification != 0)
			break;
		notif_mutex.unlock();
	}

	cout << "Notification recevied" << endl;

	return 0;
}