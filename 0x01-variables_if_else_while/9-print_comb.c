#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
(*
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
