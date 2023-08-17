#include <stlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Prints if number is postive, zero or negative
 * Return: Always (Success)
 *
 */

int ain(void)

{
	
	int n;

	srnad(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);

}
