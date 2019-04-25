#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	if(chmod("jkim", 0644) == -1)
	{
		perror("chmod failed");
		return -1;
	}
	if(chmod("kang", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1)
	{
		perror("chmod failed");
		return -1;
	}
	return 0;
}

