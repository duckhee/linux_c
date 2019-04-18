#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	for(i = 0; i < 25; i++)
	{
		printf("[%3d] %s \r\n", i, strerror(i));
	}

	return 0;

}


