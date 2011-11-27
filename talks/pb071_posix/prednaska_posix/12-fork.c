#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main_loop() { sleep(5); abort(); } 

int main(void)
{
	int stdout_pipe[2];
	int stdin_pipe[2];

	pipe(stdin_pipe); // kontrolujte navr. hodnotu
	pipe(stdout_pipe); // kontrolujte navr. hodnotu

	int pid = fork();

	if (pid < 0)
	{
		printf("Nepovedlo spustit novy proces.\n");
		return 1;
	}

	if (pid == 0)
	{
		close(stdin_pipe[1]); // zavreme zapisovaci stranu
		close(stdout_pipe[0]); // zavreme cteci stranu
		dup2(stdin_pipe[0],STDIN_FILENO); // premapujeme na stdin
		dup2(stdout_pipe[1],STDOUT_FILENO); // premapujeme na stdout
		close(stdin_pipe[0]); // neni nutne
		close(stdout_pipe[1]); // neni nutne

		return execlp("ls","ls",".",NULL);
/*
exec
-> v -> argv zadano jako pole (ukonceno NULL ukazatelem)
-> l -> argv zadano jako parametry funkce (variadric funkce, ukonceno NULL ukazatelem)
     
-> p -> program se hleda v path
-> e -> environment zadan jako posledni parametr (jako pole)
*/
	}

	// hlavni proces
	close(stdin_pipe[0]); // zavreme cteci stranu
	close(stdout_pipe[1]); // zavreme zapisovaci stranu

	FILE *child_stdin = fdopen(stdin_pipe[1],"w");
	FILE *child_stdout = fdopen(stdout_pipe[0],"r");

	/* CTENI / ZAPIS */

	char buff[1024];
	while (!feof(child_stdout))
	{
		fscanf(child_stdout,"%s",buff);
		printf("Soubor: %s\n",buff);
	}

	(void)child_stdin;

	return 0;
}
