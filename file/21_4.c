#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;

	if((fd = open("doukhee", O_RDONLY | O_CREAT, 0644)) == -1)
	{
		perror("open failed");
		return -1;

	}
	close(fd);
	return 0;
}


