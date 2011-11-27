#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		printf("Program ocekava jeden parametr, cestu k adresari.\n");
		return 1;
	}

	// vypocet datoveho objemu adresare
	char program[strlen(argv[1])+strlen("du -s")+2];
	sprintf(program,"du -s %s",argv[1]);

	FILE * adresar = popen(program,"r");
	if (adresar == NULL)
	{
		printf("Nepovedlo se spustit du\n");
		return 2;
	}

	int objem;
	fscanf(adresar,"%d",&objem);

	pclose(adresar);

	printf("Objem adresare %s je:\n",argv[1]);
	printf("\t%dkB\n",objem);
	printf("\t%dMB\n",objem/1024);
	printf("\t%dGB\n",objem/(1024*1024));
	printf("\t%dTB\n",objem/(1024*1024*1024));

	return 0;
}
