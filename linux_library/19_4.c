#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
	int fd;
	if((fd = open("nodata", O_RDONLY)) == -1)
	{
		if(errno == ENOENT)
		{
			printf("no data is not exit\r\n");
		}
		else{
			printf("unexpected error : errno = %d \r\n", errno);
		}
		return -1;
	}
	return 0;
}

