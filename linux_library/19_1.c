#include <stdio.h>
#include <errno.h>

int main()
{
	FILE *fp;

	if((fp = fopen("nodata", "r")) == NULL)
	{
		printf("errno = %d \r\n", errno);
		return -1;
	}
	return 0;

}



