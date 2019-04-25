#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(link(argv[1], argv[2]) == -1)
	{
		perror("link failed");
		return -1;
	}

	if(unlink(argv[1]) == -1)
	{
		perror("unlink failed");
		unlink(argv[2]);
		return -1;
	}
	printf("move %s to %s \r\n", argv[1], argv[2]);
	return 0;
}

