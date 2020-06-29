#include <stdio.h>

// sum numbers from 1 to 100
// do ... while

int main()
{
	int i = 1, sum = 0;
	do {
		sum = sum + i;
		i++;
	} while (i <= 100);
	printf("the value of sum from 1 to 100 is %d.\n", sum);
	return 0;
}

