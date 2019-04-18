#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hello Linux C Programing";
	char delim[] = " ";
	char *ptr;

	ptr = strtok(str, delim);
	printf("%s\r\n", ptr);
	while(ptr = strtok(NULL, delim))
	{
		printf("%s\r\n", ptr);
	}

	return 0;

}


