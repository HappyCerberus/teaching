#include <unistd.h>
#include <stdio.h>

int main()
{
	fork();
	fork();
	fork();
	fork();
	printf("Ahoj... ja jsem tady\n");
	fflush(stdout);
	return 0;
}
