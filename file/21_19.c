#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;

	if((fd = open(argv[1], O_WRONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	if(lseek(fd, 0, SEEK_END) == -1)
	{
		perror("lseek failed");
		return -1;
	}

	write(fd, "ABCD", 5);
	close(fd);

	return 0;
}

