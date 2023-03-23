#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{	
	int a = 1, b = 2, c, i = 3;
	printf("%d, %d, ", a, b);

	while (i <= 98)
       	{
       		 c = a + b;
       		 printf("%d", c);
       		 if (i != 98)
		 {
                 	 printf(", ");
       		 }
       		 a = b;
      		 b = c;
       		 i++;
	}

        printf("\n");
        return 0;
}
