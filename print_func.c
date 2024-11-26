#include "main.h"

int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}

int print_string(va_list args)
{
int s_count = 0;
char *s = va_arg(args, char*);
if (s == NULL)
	s = "(nil)";

while (*s)
	{
	s_count += _putchar(*s);
	s++;
	}
return (s_count);
}
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
