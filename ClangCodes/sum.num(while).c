#include <stdio.h>

// sum numbers from 1 to 100
// while

int main()
{
	int i = 1, sum = 0;	// define vars
	while (i <= 100)
	{
		sum = sum + i;
		i++;			// plus and sum
	}
	printf("the value of sum from 1 to 100 is %d.\n", sum);
	return 0;
}

