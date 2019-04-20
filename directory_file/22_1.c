#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char **argv)
{
	struct stat st;

	if(stat(argv[1], &st) == -1)
	{
		perror("stat failed");
		return -1;
	}

	printf("%ld byte, user-id %d, group-id %d modify time %s", st.st_size, st.st_uid, st.st_gid, ctime(&st.st_mtime));

	return 0;

}
