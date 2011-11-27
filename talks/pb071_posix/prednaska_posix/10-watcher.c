#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main_loop() { sleep(5); abort(); } 

int main()
{
	int pid = fork();

	if (pid < 0)
	{
		printf("Nepovedlo spustit novy proces.\n");
		return 1;
	}

	if (pid == 0) // potomek
		return main_loop();

	// dohlizeci program
	int status;
	wait(&status); // pocka na ukonceni nektereho z potomku
	               // mame jenom jednoho

	if (WIFEXITED(status))
	{
		printf("Program skoncil normalne s navratovou hodnotou %d.\n",
			WEXITSTATUS(status));
	}
	else if (WIFSIGNALED(status))
	{
		printf("Program skoncil na zaklade signalu %d.\n",
			WTERMSIG(status));
	}

	return 0;
}
