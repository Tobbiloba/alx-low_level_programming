#include <stdio.h>
/**
 * main - Function
 * Return: result
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
		}
		else
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
