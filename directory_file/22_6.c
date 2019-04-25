#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	struct stat st;

	if(stat(argv[1], &st) == -1)
	{
		perror("stat failed");
		return -1;
	}

	printf("user %s %s %s \r\n", (st.st_mode & S_IRUSR)?"read ":"", (st.st_mode & S_IWUSR) ? "write ":"", (st.st_mode & S_IXUSR)?"execute":"");
	printf("Group : %s %s %s \r\n", (st.st_mode & S_IRGRP)?"read ":"", (st.st_mode & S_IWGRP)?"write ":"", (st.st_mode &S_IXGRP)?"execute":"");
	printf("others : %s %s %s \r\n", (st.st_mode & S_IROTH)?"read ":"", (st.st_mode & S_IWOTH)?"write ":"", (st.st_mode &S_IXOTH)?"execute ":"");

	return 0;
}

