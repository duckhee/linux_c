#include <stdio.h>
#include <string.h>

int main()
{
	char buf1[20] = "Linux";
	char buf2[20] = "Linux";

	strcat(buf1, " Programing");
	strncat(buf2, " Programing", 5);

	printf("%s\r\n %s\r\n", buf1, buf2);

	return 0;

}


