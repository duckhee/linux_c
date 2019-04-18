#include <stdio.h>
#include <string.h>

#define MAX         20

int main()
{
	char buffer1[MAX];
	char buffer2[MAX];

	strcpy(buffer1, "Linux");
	printf("%s\r\n", buffer1);
	strcpy(buffer2, "Programing");
	printf("%s\r\n", buffer2);
	strcpy(buffer2, buffer1);
	printf("%s\r\n", buffer2);

	return 0;
}


