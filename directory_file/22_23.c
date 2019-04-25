#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
	if(chroot("/home/duckhee/Desktop/workspace/c_language/directory_file") == -1)
	{
		perror("chroot failed");
		return -1;
	}

	if(chdir("/") == -1)
	{
		perror("chdir failed");
		return -1;
	}

	if(mkdir("rootsub", 0777) == -1)
	{
		perror("mkdir failed");
		return -1;
	}
	return 0;
}

