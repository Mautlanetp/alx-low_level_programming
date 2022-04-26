#include "main.h"

/**
 * print_alphabet_x10 - will print 10 time the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		
		}
		_putchar('\n');
	}

}
