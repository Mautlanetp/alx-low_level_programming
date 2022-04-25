#include <stdio.h>

/**
 * main - prints lowercase alphabet, except p and e
 *
 * Return: Always 0 (seccess)
 */

int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(a[i]);
		i++;
	}

	putchar('\n');

	/**
	 * for (i = 0; i < 24; i++)
	 * {
	 * putchar(a[i]);
	 * }
	 * putchar('\n');
	 */

	return (0);
}
