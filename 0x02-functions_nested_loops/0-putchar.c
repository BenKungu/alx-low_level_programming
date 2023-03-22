#include <main.h>

/* *
 *main - print _putchar
 *
 *Desciption : print _putchar followed by a new line
 *
 *Return: 0  (Success)
*/

int main() {
   char s[] ='_putchar';
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    i = 0;
    for(s[i])
	{
		_putchar(s[i]);
		i++;
	}


    return 0;
}

