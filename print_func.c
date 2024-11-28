#include "main.h"
#include <stdio.h>

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
	s = "(null)";

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

/**
* print_int - print an integers
* @args: argument variadic
* Return: number of integers
*/

int print_int(va_list args)
{
unsigned int n;
int count = 0;
int num = va_arg(args, int);

if (num < 0)
{
count += _putchar('-');
n = -num;
}
else
n = num;
count += print_number(n);
return (count);
}

/**
* print_number - print numbers one by one recursively using putchar
* @n: integer from print_int
* Return: number of integers
*/

int print_number(unsigned int n)
{
int count = 0;

if (n / 10)
{
count += print_number(n / 10);
}
count += _putchar((n % 10) + '0');
return (count);
}

