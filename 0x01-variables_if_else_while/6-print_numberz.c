#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all numbers below 10
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
