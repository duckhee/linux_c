#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(int artc, char **argv)
{
	int fd;

	if((fd = open(argv[1], O_WRONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	if(ftruncate(fd, 150) == -1)
	{
		perror("ftruncate failed");
		return -1;
	}

	close(fd);

	return 0;

}


