#include "main.h"
/**
 * print_chessboard - The name of the function
 * @a: A string
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; a[j][7]; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
