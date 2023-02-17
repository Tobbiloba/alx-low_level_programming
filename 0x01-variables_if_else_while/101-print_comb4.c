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
		int k = unit;

		while (tens <= 8 && i <= 8)
		{
			int j = k;

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
			k++;
		}
		unit++;
		tens++;
		hund++;
	}
	putchar("\n");
	return (0);
}
