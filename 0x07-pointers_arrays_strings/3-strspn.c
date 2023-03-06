#include "main.h"
/**
 * _strspn - returns the number of prefix
 * @s: The tester
 * @accept: The test
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int numOfTimes = 0;
	int i;
	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				numOfTimes++;

		}
	}
	return (numOfTimes);
}
