#include <stdio.h>

int main()
{
	// trochu budeme sidit a misto interni implementace 
	// pouzijeme systemovou kalkulacku
	int x,y;
	printf("Zadej dve cela cisla, ja ti vypocitam mocninu.\n");
	scanf("%d %d",&x,&y);

	FILE * kalkulacka = popen("bc","w"); 
	// spustime bc a otevreme pro zapis
	if (kalkulacka == NULL)
	{
		printf("Nepovedlo se spustit kalkulacku.\n");
		return 1;
	}

	printf("%d^%d=",x,y);
	fflush(stdout);

	fprintf(kalkulacka,"%d^%d\n",x,y); // zapiseme na vstup bc "cislo^cislo"
	fprintf(kalkulacka,"quit\n"); // zapise na vstup bc "quit"
	pclose(kalkulacka);

	return 0;
}
