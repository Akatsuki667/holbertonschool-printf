#include "main.h"
/* impression caractère */
/**
 * _putchar - impression caractère
 * @c: paramètres
 * Return: 1 ou -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
/* 1 : descripteur fichier (stdout) */
/* & : pointeur vers données à écrire */
/* &c : l'adresse du caractère c */
/* 1 : indique le nb d'octets à écrire */
}
