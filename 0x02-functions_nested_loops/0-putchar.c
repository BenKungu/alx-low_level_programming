#include "main.h"

/**
 *main - print _putchar
 *
 *Desciption : print _putchar followed by a new line
 *
 *Return: 0  (Success)
 */
int main()
{
       	char s[] ="_putchar";
       	int i = 0;
       	while(s[i])
       	{
		_putchar(s[i]);
		i++;
       	}
       	_putchar('\n');
	return 0;
}
