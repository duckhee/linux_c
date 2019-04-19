#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>


int main(int argc, char **argv)
{
	int fd;

	if((fd = creat(argv[1], 90644)) == -1)
	{
		perror("create failed");
		return -1;
	}

	write(fd, "abcdefghijklmnopqrstuvwxyz", 26);

	if(lseek(fd, 30, SEEK_SET) == -1)
	{
		perror("lseek failed");
		return -1;
	}

	write(fd, "ABCD", 4);
	close(fd);
	return 0;

}
