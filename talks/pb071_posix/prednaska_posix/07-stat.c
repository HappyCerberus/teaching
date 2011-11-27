#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
 
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
	{
		struct stat info;
		lstat(polozka->d_name,&info);
		puts(polozka->d_name);
		if (S_ISREG(info.st_mode))
			puts("\tObycejny soubor");
		if (S_ISDIR(info.st_mode))
			puts("\tAdresar");
		if (S_ISCHR(info.st_mode))
			puts("\tZnakove zarizeni");
		if (S_ISBLK(info.st_mode))
			puts("\tBlokove zarizeni");
		if (S_ISFIFO(info.st_mode))
			puts("\tPojemenovana roura");
		if (S_ISLNK(info.st_mode))
			puts("\tSymbolicky link");
		if (S_ISSOCK(info.st_mode))
			puts("\tSocket");
	}
 
	closedir(dir);
	return 0;
}

int main(void)
{
	listdir(".");
	return 0;
}

