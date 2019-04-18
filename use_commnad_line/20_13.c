#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *value, *string;

	if(argc == 1 || argc > 3)
	{
		printf("Usage : a.out variable [value]\r\n");
		return -1;
	}

	if((value = getenv(argv[1])) != NULL)
	{
		printf("%s : %s \r\n", argv[1], value);
	}
	else{
		printf("%s : no value \r\n", argv[1]);
	}

	if(argc == 3)
	{
		string = (char *)malloc(strlen(argv[1])+strlen(argv[2]) + 2);
		strcpy(string, argv[1]);
		strcat(string, "=");
		strcat(string, argv[2]);

		putenv(string);

		if((value=getenv(argv[1])) != NULL)
		{
			printf("%s's new value : %s\r\n", argv[1], value);
		}
		else{
			printf("error : %s\r\n", string);
		}
	}

	return 0;
}


