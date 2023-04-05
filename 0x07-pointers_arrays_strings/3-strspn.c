#include "main.h"
#include <stdio.h>

/**
 *get length
 *string
 *source
 */

int _putchar(char c);

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	bool found;

	for (unsigned int i = 0; s[i] != '\0'; ++i)
       	{
        	found = false;
		
        	for (unsigned int j = 0; accept[j] != '\0'; ++j)
	       	{
			if (s[i] == accept[j])
		       	{
				found = true
				break;
			}
		}
		
		if (found)
		{
			count++;
		}

	       	else
		{
			break;
		}
	}
	return count;
}
