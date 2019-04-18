#include <stdio.h>
#include <grp.h>
#include <sys/types.h>


int main()
{
	int i;
	struct group *pg;

	while(pg = getgrent())
	{
		printf("group name ; %s\n member: ", pg->gr_name);
		for(i = 0; pg->gr_name[i] != NULL; i++)
		{
			printf("%s", pg->gr_mem[i]);
		}
		printf("\r\n\r\n");
	}

	endgrent();
	return 0;

}

