#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int a;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
