#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char **argv)
{
	int fd;
	if(mkdir(argv[1], 0755) == -1)
	{
		perror("mkdir error");
		return -1;
	}

	if(chdir(argv[1]) == -1)
	{
		perror("chdir failed");
		return -1;
	}

	if((fd = open(argv[2], O_WRONLY | O_CREAT, 0644) )== -1)
	{
		perror("open failed");
		return -1;
	}


	write(fd, argv[3], strlen(argv[3]));

	close(fd);

	return 0;

}

