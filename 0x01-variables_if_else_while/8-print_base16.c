#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
char character;
number = 0;
character = 'a';
while (number <= 9)
{
putchar(number + '0');
number++;
}
while (character <= 'f')
{
putchar(character);
character++;
}
putchar('\n');
return (0);
}
