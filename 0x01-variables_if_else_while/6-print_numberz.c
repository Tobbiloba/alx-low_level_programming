#include <stdio.h>
/**
 * main - Function
 * Return: result
 */
int main(void)
{
	int num = 0;

	do {
		putchar(num + '0');
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
