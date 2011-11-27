#include <stdio.h>
#include <dirent.h>
 
int listdir(const char *path)
{
	struct dirent *polozka;
	DIR *dir;
 
	dir = opendir(path);
	if (dir == NULL) 
	{
		perror("nepovedlo se otevrit adresar");
		return -1;
	}
 
	while((polozka = readdir(dir)))
		puts(polozka->d_name);
 
	closedir(dir);
	return 0;
}

int main(void)
{
	listdir(".");
	return 0;
}

