#include "main.h"
/**
 * print_sign - checks if a character is upper or lower case
 * @n: this function takes a parameter to check against
 *
 * Return: returns 0 or 1 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
