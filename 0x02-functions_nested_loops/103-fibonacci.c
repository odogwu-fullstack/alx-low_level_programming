#include <stdio.h>
/**
 * main - checks if a character is upper or lower case
 *
 * Return: Doesnt return shit
 */
int main(void)
{
unsigned long int firstDigit = 1;
unsigned long int lastDigit = 2;
unsigned long int currentDigit = 2;
unsigned long int sum = 0;
while (currentDigit <= 4000000)
{
if (currentDigit % 2 == 0)
sum += currentDigit;
currentDigit = lastDigit + firstDigit;
firstDigit = lastDigit;
lastDigit = currentDigit;
}
printf("%lu\n", sum);
return (0);
}
