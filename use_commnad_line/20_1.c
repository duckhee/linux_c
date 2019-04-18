#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	printf("argc : %d \r\n", argc);

	for(i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s \r\n", i, argv[i]);
	}

	return 0;

}


