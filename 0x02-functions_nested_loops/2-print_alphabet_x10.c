#include "main.h"
/**
 * print_alphabet_x10 - Prints all lower case alphabets
 *
 * Return: Doesnt return shit
 */
void print_alphabet_x10(void)
{
char start;
int counter = 0;

while (counter < 10)
{
start = 'a';
while (start <= 'z')
{
_putchar(start);
start++;
}
_putchar('\n');
counter++;
}
}
