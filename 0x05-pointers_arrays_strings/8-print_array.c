#include <stdio.h>
#include "main.h"
/**
 * print_array- checks if a character is upper or lower case
 * @a: a rubbish integer array
 *  @n: a rubbish integer
 *
 * Return: Doesnt return shit
 */
void print_array(int *a, int n)
{
int counter;
for (counter = 0; counter < n; counter++)
{

if (counter == n - 1)
{
printf("%d", *(a + counter));
break;
}
printf("%d, ", *(a + counter));
}
printf("\n");
}
