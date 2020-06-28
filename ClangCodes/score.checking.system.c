#include <stdio.h>

// score checking system practice

int main ()
{
	int score = 87;
	// this is the score of you.
	if (score <= 100 && score > 80)
	{
		printf("your score is A level.\n");
	} else
	{
		if (score <= 80 && score >= 60)
		{
			printf("your score is B level.\n");
		} else
		{
			printf("your score is C level.\n");
		}
	}
	return 0;
}

