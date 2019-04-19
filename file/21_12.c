#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX    1024

int main(int argc, char **argv)
{
	int count;
	char buf[MAX];
	
	while((count = read(STDIN_FILENO, buf, MAX)) > 0)
	{
		if(write(STDOUT_FILENO, buf, count) != count)
		{
			perror("write error");
			return -1;
		}
	}
	return 0;
}


