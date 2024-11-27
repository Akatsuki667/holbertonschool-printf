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
 * Return: nb caractères
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
 * Return: imprime caractères spéciaux
 */
int print_percent(va_list args)
{
(void)args;
 /* indication explicite compilateur args pas utilisé */
return (_putchar('%'));/* retour imprimer caractère */
}
/**
 * print_int - fonction imprimant des entiers
 * @args: argument variadiques
 * Return: nb d'entiers
 */
int print_int(va_list args)
{
int n = va_arg(args, int); /* extraction argument -> stockage arguments */
int count = 0; /* calcul nb total caractère */
if (n < 0)
{
count += _putchar('-'); /* ajout signe au compteur */
n = -n; /* conversion en positif */
}
count += print_number(n);
/* appel fonction afficher n_1 -> ajouter au compteur */
return (count);
}
/**
 * print_number - fonction récursive auxiliaire
 * @n: paramètres à calculer
 * Return: nb de caractère
 */
int print_number(unsigned int n)
{
int count = 0; /* stockage nb */
if (n / 10 > 0)
count += print_number(n / 10); /* appel récursif -> ajouter au compteur */
count += _putchar((n % 10) + '0');
/* une fois nb réduit à un seul chiffre -> extraction nb */
/* conversion en caractère ASCII(+ '0) */
return (count);
}
