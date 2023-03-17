#include <stdio.h>

/**
 * main - print from a to z
(*
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
