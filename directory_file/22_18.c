#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat st1, st2;

	if(symlink(argv[1], argv[2]) == -1)
	{
		perror("symlink failed");
		return -1;
	}
	if(stat(argv[2], &st1) == -1)
	{
		perror("stat failed");
		return -1;
	}
	if(lstat(argv[2], &st2) == -1)
	{
		perror("lstat failed");
		return -1;
	}
	printf("%ld bytes : %ld bytes \r\n", st1.st_size, st2.st_size);

	return 0;
}

