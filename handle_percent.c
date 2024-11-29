#include "main.h"
/**
 * handle_percent - gestion caractère null après le %
 * @format: pointeur chaîne de caractère
 * @i: index de format
 * @args: arguments variadiques
 * Return: (-1) = NULL OU index suivant de format
 */
int handle_percent(const char *format, int i, va_list args)
{
if (format[i + 1] == '\0')
/* vérification null bytes après % */
{
va_end(args); /* libération ressource gestion arg variadique */
return (-1);
}
return (i + 1); /* avancer l'index pour ignorer '%' */
}
