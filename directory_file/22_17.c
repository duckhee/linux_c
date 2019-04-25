#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(symlink(argv[1], argv[2]) == -1)
	{
		perror("symlink error");
		return -1;
	}

	printf("link %s to %s \r\n", argv[1], argv[2]);

	return 0;
}

