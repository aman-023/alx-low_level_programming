#include<stdio.h>
/**
 * main -entry point
 *
 * Description : print lowercase letters in reverse order
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	return (0);
}
