#include <stdio.h>
/**
 * main - function
 * Return: result
 */
int main(void)
{

	int a = 0;

	char c = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	while (c <= 'f')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
