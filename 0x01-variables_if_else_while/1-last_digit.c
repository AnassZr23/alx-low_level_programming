#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, the_last_degit, X;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
the_last_degit = n % 10;
X = the_last_degit;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, X);

}
else if (n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, X);
}
else
{
printf("Last digit of %d is %d and is 0", n, X);
}
return(0);
}

