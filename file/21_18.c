#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd;
	off_t filesize;

	if((fd = open(argv[1], O_RDONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	if((filesize = lseek(fd, 0, SEEK_END)) == -1)
	{
		perror("lseek failed");
		return -1;
	}
	printf("%s's size if %d \r\n", argv[1], filesize);
	close(fd);

	return 0;
}


