#include <stdio.h>

#define SIZE     1000

int main()
{
	int num;
	num = SIZE;
	printf("%d\r\n", num);

#undef SIZE
#define SIZE           5000

	num = SIZE;
	printf("%d\r\n", num);

	return 0;

}
