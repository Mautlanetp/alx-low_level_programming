#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - will determine if the last digit of n is > 5,=0 or < 6 and not 0
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	/**
	 * printf("%d \n", n);
	 * printf("%d\n ", i);
	 */

	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}

	return (0);
}
