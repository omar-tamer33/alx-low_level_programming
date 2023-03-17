#include <stdio.h>

/**
 * main - print all numbers base sixteen
(*
 * Return: 0 on success
 */
int main(void)
{
	int i;

	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
