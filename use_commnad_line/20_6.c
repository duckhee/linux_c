#include <stdio.h>

void output_file(FILE *fp);

int main(int argc, char **argv)
{
	FILE *fp;

	if(argc == 1)
	{
		printf("Usage : a.out filename ...\r\n");
		return -1;
	}

	while(*++argv)
	{
		printf("\n[filenmae : %s]\r\n\r\n", *argv);
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
	int ch;

	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
	}
}


