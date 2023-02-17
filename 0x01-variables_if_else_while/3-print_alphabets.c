#include <stdio.h>
/**
 * main - Function
 * Return: return
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
	}
	while (d < 'Z')
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
