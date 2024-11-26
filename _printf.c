#include "main.h"

int _printf(const char *format, ...)
{
print_type types[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{NULL, NULL}
};

va_list args;
int count = 0;
int i = 0;
int j;

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
		{
		count += _putchar(format[i]);
		}
		i++;
	}
_putchar('\n');
va_end(args);
return (count);
}
