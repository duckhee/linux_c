#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int opt;

	while((opt = getopt(argc, argv, "lf:ai")) != -1)
	{
		switch(opt)
		{
			case 'l':

			case 'a':

			case 'i':
				printf("option: %c \r\n", opt);
				break;
			case 'f':
				printf("option %c's argument : %s \r\n", opt, optarg);
				break;
			default:
				printf("unknown option: %c \r\n", optopt);
		}
	}
	return 0;
}


