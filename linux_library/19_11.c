#include <stdio.h>


int main()
{
	FILE *fp;

	if((fp = fopen("nodata", "r")) == NULL)
	{
		perror("ERROR");
		return -1;
	}
	return 0;

}


