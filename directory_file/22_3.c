#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	struct stat st;

	for(i = 1; i < argc; i++)
	{
		if(stat(argv[i], &st) == -1)
		{
			perror("stat failed");
			return -1;
		}
	
		printf("%s's mode : %x\r\n", argv[i], st.st_mode);
	}
	return 0;
}


	
