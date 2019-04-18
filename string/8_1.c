#include <stdio.h>

int main()
{
	int ch, numalpha = 0;

	while((ch=getchar()) != EOF)
	{
		if((ch >= 'A' && ch <='Z') || (ch >= 'a' &&ch <='z'))
		{
			numalpha++;
		}
	}
	printf("alphabet : %d \r\n", numalpha); //ctrl + D

	return 0;
}


