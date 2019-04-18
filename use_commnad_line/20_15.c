#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *value;

	if((value = getenv("HOME")) != NULL)
	{
		printf("HOME : %s \r\n", value);
	}
	else{
		printf("HOME : no value\r\n");
	}

	unsetenv("HOME");

	if((value=getenv("HOME")) != NULL)
	{
		printf("HOME : %s \r\n", value);
	}
	else{
		printf("HOME : no value \r\n");
	}

	return 0;
}

