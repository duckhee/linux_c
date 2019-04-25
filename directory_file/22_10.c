#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

int main()
{
	DIR *dp;

	if(mkdir("dir", 0755) == -1)
	{
		perror("mkdir failed");
		return -1;
	}

	if((dp = opendir("dir")) == NULL)
	{
		perror("opendir error");
		return -1;
	}

	closedir(dp);

	return 0;
}

