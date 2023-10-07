#include <stdio.h>

/**
 * main -print_alphabet.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
char letter_2 = 'q';
char letter_3 = 'e';
while (letter <= 'z')
{
if (letter != letter_2  && letter != letter_3)
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}

