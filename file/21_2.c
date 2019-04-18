#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


#define BUFFSIZE      1024

int main()
{
	int fd1, fd2;
	ssize_t n;
	char buf[BUFFSIZE];

	fd1 = open("doukhee", O_RDONLY);
	fd2 = open("won", O_WRONLY);

	n = read(fd1, buf, BUFFSIZE);

	write(fd2, buf, n);

	close(fd1);
	close(fd2);

	return 0;

}
