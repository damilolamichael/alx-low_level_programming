#include "main.h"
/**
 *swap_int - This function will swap the value of two integers
 *@a: First integer
 *@b: Second integer
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
