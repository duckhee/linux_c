#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE *fp;

	if((fp = fopen("nodata", "r")) == NULL)
	{
		fprintf(stderr, "ERROR : %s \r\n", strerror(errno));
		return -1;
	}

	return 0;

}



