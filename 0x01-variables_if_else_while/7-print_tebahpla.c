#include <stdio.h>

/**
 * main -  Smile in the mirror
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
