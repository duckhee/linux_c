#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int fd;

	if((fd = open(argv[1], O_WRONLY)) == -1)
	{
		perror("open failed");
		return -1;
	}
	if(ftruncate(fd, 100) == -1)
	{
		perror("ftruncate error");
		return -1;
	}

	close(fd);

	return 0;
}
