#include <stdio.h>
/**
 * main - function
 * Return: result
 */

int main(void)
{

	int hund = 0;

	int tens = 1;

	int unit = 2;

	while (hund < 8)
	{
		int i = tens;

		while (tens <= 8 && i <= 8)
		{
			int j = unit;

			while (unit <= 9 && j <= 9)
			{
				if (i != j)
				{
					putchar(hund + '0');
					putchar(i + '0');
					putchar(j + '0');

					if (hund < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				j++;
			}
			i++;
		}
		unit++;
		tens++;
		hund++;
	}
	return (0);
}
