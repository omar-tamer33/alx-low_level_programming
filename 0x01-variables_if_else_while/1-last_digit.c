#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if last random number is greate.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;

	printf("%s %d is %d and is ", last, n, digit);
	if (digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (digit == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
