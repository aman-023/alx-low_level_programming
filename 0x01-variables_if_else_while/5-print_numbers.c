#include<stdio.h>
/**
 * main -entry point
 *
 * Description : print numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		printf("%d", x);
	}
		putchar('\n');
	return (0);
}
