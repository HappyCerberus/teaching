#include <unistd.h>

void narocna_operace() {}

int main()
{
	// absolutni priorita je 0..20
	nice(20); // relativni snizeni priority
	// kladne - snizeni / zaporne - zvyseni
	//
	// dalsi moznosti:
	// int getpriority(int which, int who);
	// int setpriority(int which, int who, int prio);

	narocna_operace();
	return 0;
}
