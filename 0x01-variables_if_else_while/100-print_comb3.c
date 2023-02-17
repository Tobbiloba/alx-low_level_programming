#include <stdio.h>
/**
 * main - function
 * Return: result
 */
int main(void)
{
	int i = 0;
	int j;
	int num = 0;

	if (num <= 9)
	{
		while (i < 9)
		{
			j = num;

			while (j < 9)
			{
				j++;
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			i++;
			num++;
		}
	}
	putchar('\n');
	return (0);
}
