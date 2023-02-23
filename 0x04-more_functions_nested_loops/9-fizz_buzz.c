#include <stdio.h>
/**
 * main - prints fizz buzz
 * Return: returns answer
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("Buzz Fizz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
		i++;
	}
	return (0);
}
