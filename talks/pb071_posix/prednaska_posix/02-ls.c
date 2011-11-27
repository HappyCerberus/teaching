#include <stdlib.h>
#include <stdio.h>

int main()
{
	int ret = system("ls");
	if (ret != 0)
	{ printf("Volani nebo beh programu ls selhal.\n"); }

	return 0;
}
