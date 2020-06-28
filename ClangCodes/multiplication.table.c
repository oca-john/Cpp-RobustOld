#include <stdio.h>

// multiplication table with while / for

int main()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d×%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
