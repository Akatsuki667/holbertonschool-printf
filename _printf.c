#include "main.h"

int _printf(const char *format, ...)
{
print_type types[] = {
{"c", print_char},
{"s", print_string},
{NULL, NULL}
};

va_list args;
/*int count = 0;*/
int i = 0;
int j;

va_start(args, format);

while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%' && format[i + 1])
	i++;
	j = 0;
	while (types[j].type)
		{
		if (*(types[j].type) == format[i])
			{
			types[j].f(args);
			break;
			}
		j++;
		}
	i++;
	}
_putchar('\n');
va_end(args);
return (i);
}
