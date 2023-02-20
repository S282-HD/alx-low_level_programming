#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print digits of base 16
 * Return: 0
 */
int main(void)
{
	char i = '0';
	char x;

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
