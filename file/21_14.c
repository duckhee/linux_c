#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX        10

int main()
{
	int fd;
	char buf[MAX] = "C program";

	if((fd = open("doukhee", O_WRONLY | O_CREAT | O_APPEND, 0644)) == -1)
	{
		perror("open failed");
		return -1;
	}

	write(fd, buf, MAX);
	close(fd);

	return 0;
}
