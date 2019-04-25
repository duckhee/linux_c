#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv)
{
	if(remove(argv[1]) == -1)
	{
		perror("remove failed");
		return -1;
	}
	printf("remove %s \r\n", argv[1]);
	return 0;
}

