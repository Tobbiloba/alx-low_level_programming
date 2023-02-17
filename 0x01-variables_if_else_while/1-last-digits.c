#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints out whether a number is greater than zero or less
 * return: Success (0)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is %d\n", n, m, m);
	return (0);
}
