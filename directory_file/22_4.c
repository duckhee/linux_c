#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat st;

	if(stat(argv[1], &st) == -1)
	{
		perror("stat failed ");
		return -1;
	}

	switch(st.st_mode &S_IFMT)
	{
		case S_IFREG:
			printf("regular\r\n");
			break;
		case S_IFDIR:
			printf("directory\r\n");
			break;
		case S_IFCHR:
			printf("character special\r\n");
			break;
		case S_IFBLK:
			printf("block special\r\n");
			break;
		case S_IFIFO:
			printf("fifo\r\n");
	}

	return 0;
}

