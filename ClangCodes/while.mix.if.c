#include <stdio.h>

// mix while and if
// print all nums which can divide 3 under 20

int main()
{
	int i = 1, j = 0;
	while (i < 21)
	{
		j = i % 3;
		if (j == 0)
		{
			printf("nums can divide 3 under 20 is: %d\n",i);
		}
		i++;
	}
	return 0;
}
