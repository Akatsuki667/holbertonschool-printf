#include "main.h"

/**
* print_char - print a character
* @args: argument variadic
* Return: number of char (1 here)
*/

int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}

/**
* print_string - print a string
* @args: argument variadic
* Return: number of char in string
*/

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

/**
* print_percent - print a percent
* @args: argument variadic
* Return: number of %
*/

int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}

