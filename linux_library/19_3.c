#include <stdio.h>
#include <errno.h>
#include <math.h>


int main()
{
	double y;

	errno = 0;
	y = sqrt(-1);

	if(errno != 0)
	{
		printf("errno = %d \r\n", errno);
		return -1;
	}
	return 0;
}


