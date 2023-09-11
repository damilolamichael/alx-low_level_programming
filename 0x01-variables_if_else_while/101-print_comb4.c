#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
	int n;
	int m;
	int a;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (a = 50; a < 58; a++)
			{
				if (a > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(a);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	putchar(0);
}
