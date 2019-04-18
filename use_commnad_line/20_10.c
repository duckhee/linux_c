#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main()
{
	while(*environ)
	{
		printf("%s\r\n", *environ++);
	}
	return 0;
}




