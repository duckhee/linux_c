#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd;

	if((fd = open(argv[1], O_WRONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	if((dup2(fd, 7)) == -1)
	{
		perror("dup2 failed");
		return -1;
	}

	if(lseek(7, 0, SEEK_END) == -1)
	{
		perror("lseek failed");
		return -1;
	}

	write(7, "ABCD", 5);
	close(fd);
	return 0;

}


