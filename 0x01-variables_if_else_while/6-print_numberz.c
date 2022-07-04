#include<stdio.h>
/**
 * main- entry point
 *
 * Description : print numbers using putchar
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
