#include "main.h"

/**
 * print_last_digit - entry point
 * Description: This function  prints the last digit of a number.
 * @a: compute last digit
 * Return: last no
 */

int print_last_digit(int a)
{
	int last_no;

	last_no = a % 10;
	if (last_no < 0)
	{
		last_no = last_no * -1;
	}
	_putchar(last_no + '0');
	return (last_no);
}

