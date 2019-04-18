#include <stdio.h>

#define MAX(A, B)  ((A) > (B) ? (A) : (B))

int main()
{
	int i, j;
	printf("Input two integer ==> ");
	scanf("%d %d", &i, &j);
	printf("max number : %d \r\n", MAX(i, j));

	return 0;

}


