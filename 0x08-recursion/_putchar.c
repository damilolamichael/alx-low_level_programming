#include <unistd.h>

/*
 * _putchar - include the c character to stdout
 * @c: The character to print
 * Return: success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
