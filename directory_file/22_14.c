#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>


int main(int argc, char **argv)
{
	DIR *dp;
	struct dirent *dirp;
	char *dir;
	if(argc == 1)
	{
		dir = ".";
	}else{
		dir = argv[1];
	}
	if((dp = opendir(dir)) == NULL) {
		perror("openddir error");
		return -1;
	}
	while(dirp=readdir(dp))
	{
		if(strncmp(dirp->d_name, ".", 1))
		{
			printf("%s ", dirp->d_name);

		}
	}


	printf("\r\n");

	closedir(dp);
	
	return 0;
}


