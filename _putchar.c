#include "main.h"
/* _putchar - impression caractère */
/* reconstruction de la fontion putchar */
int _putchar(char c)
{
return write(1, &c, 1);
/**
 * 1 : descripteur fichier (stdout)
 * & : pointeur vers données à écrire
 * &c : l'adresse du caractère c
 * 1 : indique le nb d'octets à écrire
 */
}
