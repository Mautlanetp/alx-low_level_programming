#include <stdio.h>
/**
 * main - prints my name
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	char MY_NAME[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(MY_NAME[i]);
		i++;
	}

	putchar('\n');

	/**
	 * for (i = 0; i < 52; i++)
	 * {
	 * putchar(MY_NAME[i]);
	 * }
	 * putchar('\n');
	 */

	return (0);
}
