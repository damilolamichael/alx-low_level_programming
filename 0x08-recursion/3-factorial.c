#include "main.h"
/**
 *factorial - This function return the factorial of a given number.
 *@n: function parameter
 *Return: a given factorial
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
