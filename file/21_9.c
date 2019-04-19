#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX               100

int main()
{
	int fd, i;
	char buf[MAX];
	long int length = 0;

	if((fd = open("doukhee", O_RDONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}

	while((i = read(fd, buf, MAX)) > 0)
	{
		length += i;
	}
	printf("Total characcters in douckh : %ld\r\n", length);
	close(fd);

	return 0;

}


