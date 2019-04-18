#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	printf("UserId : %d \r\n", getuid());

	printf("GroupId : %d \r\n", getgid());

	return 0;

}


