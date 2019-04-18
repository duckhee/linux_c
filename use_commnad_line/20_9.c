#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv, char **envp)
{
	while(*envp)
	{
		printf("%s\r\n", *envp++);
	}
	return 0;
}


