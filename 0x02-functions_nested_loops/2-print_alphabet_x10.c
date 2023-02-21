#include "main.h"
/**
 * main - A function that prints all lowecase alphabets 10 times
 * Return: putchar
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		for (char a = 'a'; a <= 'z'; a++)
		{
			_puthar(a);
		}
		_putchar('\n);
		i++;
	}
	return (0);
}
