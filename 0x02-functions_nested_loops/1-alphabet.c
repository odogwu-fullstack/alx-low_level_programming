#include "main.h"
/**
 * print_alphabet - Prints all lower case alphabets
 *
 * Return: Doesnt return shit
 */
void print_alphabet(void)
{
char start = 'a';

while(start <= 'z')
{
_putchar(start);
start++;
}
_putchar('\n');
}
