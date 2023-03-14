#include "main.h"
#include <stdlib.h>

/**
 * create_array - The name of the function
 * @size: The size of the array
 * @c: The char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
