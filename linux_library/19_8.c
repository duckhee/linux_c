#include <stdio.h>
#include <stdlib.h>

void my_assert(int expression);

int main()
{
	my_assert(7 == 7);
	printf("yes\r\n");

	my_assert(3 == 5);
	printf("no \r\n");

	return 0;

}

void my_assert(int expression)
{
	if(!(expression))
	{
		printf("%s:%d:Assertion failed.\r\n", __FILE__, __LINE__);
		abort();
	}
}


