#include "main.h"
/**
 * _printf - imprimer string
 * @format: contenu à imprimer
 * Return: nb de caractère
 */
int _printf(const char *format, ...)
{
print_type types[] = {
{"c", print_char}, /* association %c à print_char */
{"s", print_string}, /* association %s à print_string */
{"%", print_percent}, /* association % à print_percent */
{"d", print_int},
{"i", print_int},
{NULL, NULL} /* fin du tableau */
};
int i = 0, j, size = 0;
va_list args;
if (format == NULL) /* vérifier si le format est valide */
return (-1);
va_start(args, format); /* initialiser les arguments variadiques */
while (format[i] != '\0') /* parcourir format index i */
{
if (format[i] == '%' && format[i + 1])/* vérifier caractère spécial */
{
i++; /* passer au caractère suivant */
j = 0;
while (types[j].type != NULL) /* parcourir types index j */
{
if (*types[j].type == format[i]) /* vérification correspondance */
{
size += types[j].f(args); /* appel fonction, ajout à size */
break; /* sortir de la boucle lorsqu'il y a correspondance */
}
j++;
}
if (!types[j].type) /* aucun type correspondant */
{
size += _putchar('%'); /* imprimer carcatère brut */
size += _putchar(format[i]); /* imprimer caractère suivant */
}
}
else /* caractère ordinaire */
size += _putchar(format[i]); /* imprimer caractère */
i++; /* caractère suivant */
}
va_end(args); /* libérer ressources */
return (size); /* retourner nb total de caractères imprimés */
}
