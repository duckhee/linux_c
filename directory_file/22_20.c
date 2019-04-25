#include <stdio.h>


int main(int argc, char **argv)
{
	if(rename(argv[1], argv[2]) == -1)
	{
		perror("rename failed");
		return -1;
	}

	printf("rename %s to %s \r\n", argv[1], argv[2]);
	return 0;

}

