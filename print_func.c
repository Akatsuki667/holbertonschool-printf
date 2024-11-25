#include "main.h"

void print_char(va_list args)
{
char c;
c = va_arg(args, int);
_putchar(c);
}

void print_string(va_list args)
{
char *s;
{
s = va_arg(args, char*);
if (s == NULL)
	{
	s = "(nil)";
	}
while (*s)
	{
	_putchar(*s);
	s++;
	}
}

void print_int(va_list args)
{
int num;
num = va_arg(args, int);
_putchar(num + '0');
}

void print_int_b10(va_list args)
{

}
