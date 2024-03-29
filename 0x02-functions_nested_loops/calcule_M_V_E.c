#include <stdio.h>
#include <math.h>
/**
*calacule de la moyenne 
*calcule de la variance
*calacule de l'ecartype 
*d'apres les donne diponible
*Return: 0.
*
*/
#define MAX_ELEMENTS 1000

int main() {
int n, i;
double somme = 0.0, moyenne, variance = 0.0, ecart_type;

printf("Entrez le nombre d'elements (max %d): ", MAX_ELEMENTS);
scanf("%d", &n);
if (n <= 0 || n > MAX_ELEMENTS) {
printf("Nombre d'Elements invalide.\n");
return 1;
}

double data[MAX_ELEMENTS]; // Move the declaration to the beginning of the block

for (i = 0; i < n; i++) {
printf("Entrez le %d element:\n", i + 1);
scanf("%lf", &data[i]);
somme += data[i];
 }

moyenne = somme / n;

for (i = 0; i < n; ++i)
variance += pow(data[i] - moyenne, 2);

variance /= n;
ecart_type = sqrt(variance);

printf("Moyenne = %.2lf\n", moyenne);
printf("Variance = %.2lf\n", variance);
printf("Ecart type = %.2lf\n", ecart_type);
}

