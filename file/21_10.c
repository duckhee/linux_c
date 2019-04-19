#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;
	char buf[20] = "Linux C Programming";

	if((fd = open("newFile", O_WRONLY | O_CREAT, 0644)) == -1)
	{
		perror("open failed");
		return -1;
	}

	if(write(fd, buf, 20) == -1)
	{
		perror("write failed");
		return -1;
	}

	close(fd);
	return 0;

}

