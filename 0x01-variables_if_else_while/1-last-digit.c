#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  main - Entry point
 *  Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n%10;
	printf("Last digit of %d is %d", n, last);
	if (last > 5)
		printf(" and is greater than 5");
	else if (last == 0)
		printf(" and is 0");
	else
		printf(" and is is less than 6 and not 0");
	return (0);
}
