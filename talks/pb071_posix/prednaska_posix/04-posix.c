#include <stdio.h>

int main()
{
	char *buf;
	size_t buflen = 0;
	size_t data = 0;
	data = getline(&buf,&buflen,stdin);

	printf("Nacetl se radek o delce %u znaku, buffer by naalokovan na %u znaku\n",(unsigned)data,(unsigned)buflen);
	printf("--\n%s--\n",buf);

	return 0;
}
