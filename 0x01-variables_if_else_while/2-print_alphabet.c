#include<stdio.h>
/**
 * main- entry point
 *
 * Description : print lowercase letter using putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
		putchar(' ');
	return (0);
}
