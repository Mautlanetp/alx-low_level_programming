#include <stdio.h>

/**
 * main - will print lowercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char A[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(A[i]);
	}

	putchar('\n');

	return (0);
}
