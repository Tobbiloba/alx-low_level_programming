#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - The name of the function
 * @str: The params
 * Return: The result
 */
char *_strdup(char *str)
{
	int i, r;
	char *string;

	if (str == NULL)
		return (NULL);

	
	i = 0;
	while (str[i] != '\0')
		i++;

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		string[r] = str[r];
	return (string);
}
