#include<stdio.h>
/**
 * main- entry point
 *
 * Description : print lowercase letters followed by uppercase letters
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
