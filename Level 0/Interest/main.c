#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y;
    float itot, it1, amount, percentage;
    printf ("\n\n");
    printf ("* Enter the amount of money : ");
    scanf ("%f",&amount);
    printf ("\n");
    printf ("* Enter the number of years : ");
    scanf ("%d",&y);
    printf ("\n");
    printf ("* Enter the percentage in %% : ");
    scanf ("%f",&percentage);
    itot = amount * percentage * y * 0.01;
    it1 = itot / y;
    printf ("\n");
    printf ("* The annual interest is %.2f\n\n",it1);
    printf ("* The total interest is %.2f\n\n",itot);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
