#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	int fd1, fd2;

	fd1 = open("doukhee", O_RDONLY);
	fd2 = open("won", O_WRONLY);

	printf("doukhee's file descriptor : %d \r\nwon's file descriptor: %d \r\n", fd1, fd2);

	close(fd1);
	close(fd2);

	return 0;
}

