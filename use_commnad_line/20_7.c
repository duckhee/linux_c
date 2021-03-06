#include <stdio.h>
#include <unistd.h>

void output_file(FILE *fp);

int flag = 0;

int main(int argc, char **argv)
{
	FILE *fp;
	int opt;

	if(argc == 1)
	{
		printf("Usage : a.out [-n] filename ...\r\n");
		return -1;
	}

	while((opt = getopt(argc, argv, "n")) != -1)
	{
		switch(opt)
		{
			case 'n':
				flag = 1;
			break;
			default:
				printf("unknown option : %c \r\n", optopt);
		}
	}

	if(flag == 1)
	{
		argv++;
	}

	while(*++argv)
	{
		printf("\r\n[file name : %s] \r\n", *argv);
		if((fp = fopen(*argv, "r")) == NULL)
		{
			perror("fopen failed");
			exit(2);
		}
		output_file(fp);
		fclose(fp);
	}
	return 0;
}

void output_file(FILE *fp)
{
	int ch, line = 1;

	if(flag)
	{
		printf("1    ");
	}

	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		if(flag && ch == '\n')
		{
			printf("%-4d", ++line);
		}
	}
}

