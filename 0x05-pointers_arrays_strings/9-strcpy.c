#include "main.h"

/**
 *_strcpy - Function that copies the string pointed to by src
 *@dest: function parameter 1
 *@src: function parameter 2
 *Return: alawys 0
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
	dest[i] = '\0';
	return (dest);
}
