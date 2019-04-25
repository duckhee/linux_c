#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
	if(mkdir("dir", 0755) == -1)
	{
		perror("mkdir failed");
		return -1;
	}

	if(rmdir("dir") == -1)
	{
		perror("rmdir failed");
		return -2;
	}

	return 0;
}

