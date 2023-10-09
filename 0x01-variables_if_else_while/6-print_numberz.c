#include <stdio.h>

/**
 * main - Numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned char i = 0;
while (i <= 9)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
