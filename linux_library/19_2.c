#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	int fd;
	if((fd = open("nodata", O_RDONLY)) == -1)
	{
		printf("errno = %d \r\n", errno);
		return -1;
	}
	return 0;
}


