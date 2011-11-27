#include <time.h>
#include <stdio.h>
#include <locale.h>

int main()
{
#ifdef LOCALE
	setlocale (LC_ALL,"");
#endif

	double f = 3.14;
	printf("Hodnota %f\n",f);

	return 0;
}
