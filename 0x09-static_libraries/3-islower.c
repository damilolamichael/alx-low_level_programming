#include "main.h"
/**
 * _islower - Entry point
 * Description: lowercase character check function
 * @c:character to check
 * Return: 0-if lowercase, 1-if not
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

