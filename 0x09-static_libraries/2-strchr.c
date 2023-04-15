#include "main.h"
#define NULL 0

/**
 * _strchr - find the character on the  string
 * @s: string
 * @c: the character you are looking for.
 * Return: pointer to first occurrence c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
