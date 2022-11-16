#include "main.h"

/**
 * strlen - get string legnth
 * @c: pointer to string
 *
 * Return: string lenght
 */
int _strlen(const char *s)
{
	int i;
	
	if (s == NULL)
	{
		return (0);
	}
	
	while (*s != '\0')
	{
		s++;
		i++;
	}
	
	return (i);
}
