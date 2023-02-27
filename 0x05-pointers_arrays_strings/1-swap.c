#include "main.h"
/**
 * swap_int - The name of the function
 * @a: The first integer
 * @b: The second integer
 * Return: Result
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
