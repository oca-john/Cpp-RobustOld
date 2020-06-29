#include <stdio.h>

// check the week

int main()
{
	int weekday = 3;
	switch(weekday)
	{
		case 1:
			printf("today is mo.\n");
			break;
		case 2:
			printf("today is tu.\n");
			break;
		case 3:
			printf("today is we.\n");
			break;
		case 4:
			printf("today is th.\n");
			break;
		case 5:
			printf("today is fr.\n");
			break;
		case 6:
			printf("today is sa.\n");
			break;
		case 7:
			printf("today is su.\n");
			break;
		default:
			printf("you write a wrong num.\n");
			break;
	}
	return 0;
}

