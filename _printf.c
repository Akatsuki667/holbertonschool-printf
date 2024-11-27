#include "main.h"
/**
* _printf - print char, string and %
* @format: types of data to print
* Return: count of char
*/
int _printf(const char *format, ...)
{
print_type types[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};
va_list args;
int count = 0, i = 0, j;

if (format == NULL)
	return (-1);
va_start(args, format);
while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%' && format[i + 1])
		{
		i++;
		j = 0;
		while (types[j].type)
			{
			if (*(types[j].type) == format[i])
				{
				count += types[j].f(args);
				break;
				}
			j++;
			}
			if (!types[j].type)
				{
				count += _putchar('%');
				count += _putchar(format[i]);
				}
			}
		else
		count += _putchar(format[i]);
		i++;
	}
va_end(args);
return (count);
}
