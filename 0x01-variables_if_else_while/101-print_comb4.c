#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints 3 digits combination
 * Return: 0
 */
int main(void)
{
	int i, x, y;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if (i < x && x < y)
				{
					putchar(i);
					putchar(x);
					putchar(y);

					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
