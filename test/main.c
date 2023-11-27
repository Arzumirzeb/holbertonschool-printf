#include "main.h"
#include <stdio.h>
int main(void)
{
	int len;
	char c = '$';
	char *s = "HEY";
	_printf("hello,%c#%s", c, s);
	len = _printf("hey%cand%s", c, s);
	printf("%d\n", len);
}
