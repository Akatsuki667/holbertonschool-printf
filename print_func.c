#include "main.h"
/**
 * print_char - fonction imprimant les caractères
 * @args: argument variadiques
 * Return: imprime le caractère
 */
int print_char(va_list args)
{
char c; /* stockage caractère */
c = va_arg(args, int); /* récupération */
return (_putchar(c)); /* imprime le caractère */
}
/**
 * print_string - fonction imprimant les caractères
 * @args: argument variadiques
 * Return: imprime les caractères
 */
int print_string(va_list args)
{
char *s;
int s_count = 0;
s = va_arg(args, char*);
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
 * print_percent - fonction imprimant caractères spéciaux
 * @args: argument variadiques
 * Return: imprime les caractères spéciaux
 */
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}

