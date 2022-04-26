#include "main.h"
/**
 * main - will print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(i[a]);
	}
	_putchar('\n');

	return (0);
}
