#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd;

	if((fd = dup(1)) == -1)
	{
		perror("dup failed ");
		return -1;
	}

	write(fd, "ABCD", 5);
	return 0;
}

