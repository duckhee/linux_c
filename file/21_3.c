#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;

	if((fd=open("doukhee", O_RDONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	close(fd);
	return 0;

}

