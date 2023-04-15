#include <unistd.h>

/**
 *  _putchar - to write the character c to stdout
 *  @c: print character
 *
 *  Return: 1 success
 *  On error, -1 is returned, the error is numbered.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
