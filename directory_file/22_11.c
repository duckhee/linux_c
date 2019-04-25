#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


int main()
{
	DIR *dp;
	struct dirent *dirp;

	if((dp = opendir(".")) == NULL)
	{
		perror("opendir failed");
		return -1;
	}

	while((dirp = readdir(dp)))
	{
		printf("%s ", dirp->d_name);
	}
	printf("\r\n");

	closedir(dp);

	return 0;

}


