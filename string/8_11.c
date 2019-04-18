#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "ABCABCABCABCABC";
	char *ptr;

	ptr = strrchr(str, 'A');
	printf("%s \r\n", ptr);

	return 0;
}

