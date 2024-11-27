#include "main.h"
/**
 * print_char - fonction imprimant les caractères
 * @args: argument variadiques
 * Return: imprime le caractère
 */
int print_char(va_list args)
{
char c; /* stockage caractère */
c = va_arg(args, int); /* récupération caractère*/
return (_putchar(c)); /* imprime le caractère */
}
/**
 * print_string - fonction imprimant les caractères
 * @args: argument variadiques
 * Return: imprime les caractères
 */
int print_string(va_list args)
{
char *s; /* stockage string */
int s_count = 0; /* compteur nb de caractère */
s = va_arg(args, char*); /* récupération caractères */
if (s == NULL) /* vérification caractère valide */
	s = "(nil)"; /* message erreur */
while (*s) /* parcours string */
{
s_count += _putchar(*s); /* imprime carcatère -> ajout dans le compteur */
s++; /* passe au caractère suivant */
}
return (s_count); /* retour nb caractère */
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

int print_int(va_list args)
{

}
