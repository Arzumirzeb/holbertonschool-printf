<<<<<<< HEAD
<<<<<<< HEAD
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
=======
#include "main.h"
=======
>>>>>>> 20df37ca5f21ba4e4423c334f9da726274038ef1
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
<<<<<<< HEAD
	int len;
	char c = '$';
	char *s = "HEY";
	int num = 5;
	_printf("hello,%c#%s num - %d", c, s, num);
	len = _printf("hey%cand%s", c, s);
	printf("%d\n", len);
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> 7ff840c1f8d521179c66e0daf5e8ff2bbb9a251f
=======
	return (0);
>>>>>>> 06629b17d3e31f8f87dba33e1073c3c78f41cd28
=======
=======
	int len, len2;

	len = _printf("%d", -1024);
	len2 = printf("%d", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
>>>>>>> 20df37ca5f21ba4e4423c334f9da726274038ef1
	return (0);
>>>>>>> f7c4b75bd666e6e90dde25b081608d5eeab9465a
}
