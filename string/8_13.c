#include <stdio.h>
#include <string.h>

int main()
{
	int n;

	n = strspn("seoulKorea", "elmopsu");

	printf("%d\r\n", n);

	return 0;

}

