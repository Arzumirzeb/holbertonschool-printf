#include "main.h"
#include <unistd.h>
/**
 * _printd - decimal print
 * @a: len
 * @b: num
 * Return: len
 */
int _printd(unsigned int *a, int b)
{
	int rem = 0, c = 0;
	unsigned int n;
	char num[11];

	if (b < 0)
	{
		write(1, "-", 1);
		(*a)++;
		n = -1 * b;
	}
	else
		n = b;
	if (n == 0)
	{
		write(1, "0", 1);
		return ((*a) + 1);
	}
	while (n > 0)
	{
		rem = n % 10;
		num[c] = rem + 48;
		n = n / 10;
		c++;
	}
	(*a) += c;
	c = c - 1;
	while (c >= 0)
	{
		write(1, &num[c], 1);
		c--;
	}
	return (*a);
}
