#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int k;
	int r;

	for (k = 0; k < n / 2 ; k++)
	{
	r = a[k];
	a[k] = a[n - 1 - k];
	a[n - 1 - k] = r;
	}
}
