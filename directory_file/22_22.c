#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
	struct stat st;

	if(stat(argv[1], &st) == -1)
	{
		perror("stat failed");
		return -1;
	}
	if(chown(argv[2], st.st_uid, st.st_gid) == -1)
	{
		perror("chown failed");
		return -1;
	}
	return 0;
}

