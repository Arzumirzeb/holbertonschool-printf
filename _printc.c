#include "main.h"
#include <unistd.h>
/**
 * _printc - print char
 * @a: leng
 * @b: char
 * Return: a
 */
int _printc(unsigned int *a, char b)
{
	write(1, &b, 1);
	(*a)++;
	return (*a);
}
