#include "main.h"
/**
 *puts2 - Print every other character of a string
 *@str: function parameter
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
		_putchar(str[i]);
}
	_putchar('\n');
}
