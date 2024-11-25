#include "main.h"

int _printf(const char *format, ...)
{
print_type types[] = {
{"c", print_char},
{"s", print_string},
{NULL, NULL}
};

va_list args;
int i = 0;
int j = 0;

va_start(args, format);

while (format != NULL && format[i] != '\0')
	{
	while (types[j].type)
		{
		if (*types[j].type == format[i])
		types[j].f(args);
		}
	j++;
	}
	j = 0;
	i++;

_putchar('\n');
va_end(args);
return (i);
}
