#include <stdio.h>
#include <string.h>

#define MAX      20

int main()
{
	char str[MAX];
	int i, j, ch;

	printf("INput string ==> ");
	scanf("%s", str);
	for(i = 0, j = strlen(str)-1; i<j; i++, j--){
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}

	printf("reverse : %s \r\n", str);

	return 0;

}


