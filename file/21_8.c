#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX       10

int main()
{
	int fd;
	char buf1[MAX], buf2[MAX];

	if((fd = open("alphabet", O_RDONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	read(fd, buf1, MAX);
	read(fd, buf2, MAX);

	printf("buf1[0]: %c\r\n buf2[0]: %c\r\n", buf1[0], buf2[0]);
	close(fd);

	return 0;

}

