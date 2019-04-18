#include <stdio.h>
#define NDEBUG
#include <assert.h>


int main()
{
	FILE *fp;

	fp = fopen("yesdata", "r");

	assert(fp);
	printf("yesdata exist\r\n");
	fclose(fp);

	fp = fopen("nodata", "r");
	assert(fp);
	printf("nodata exist\r\n");
	fclose(fp);

	return 0;
}

