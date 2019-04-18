#include <stdio.h>
#include <string.h>

int main()
{
	char *str="Hello Linux Programing, Linuxer";
	char *ptr;

	ptr = strstr(str, "Linux");
	printf("%s\r\n", ptr);

	return 0;
	
}
