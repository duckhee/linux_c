#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *value;
	setenv("HOME", "/home/jkim/book/linux", 0);
	value = getenv("HOME");
	printf("[setenv overwrite : 0] HOME : %s \r\n", value);

	setenv("HOME", "/home/jkim/book/linux", 1);
	value = getenv("HOME");
	printf("[setenv overwrite : 1] HOME : %s\r\n", value);

	return 0;
}

