#include "main.h"

/**
 *base case: if the current character is the null terminator
 *
 *recursively call the function with the next character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
