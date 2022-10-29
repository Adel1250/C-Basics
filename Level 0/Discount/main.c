#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, t;
    float p, np, x;
    printf ("\n\n");
    printf ("** DISCOUNT **\n\n");
    printf ("* Enter the quantity of products : ");
    scanf ("%d",&q);
    printf ("\n");
    printf ("* Enter the price of one product : ");
    scanf ("%f",&p);
    printf ("\n");
    printf ("** Discount types are : \n\n");
    printf (" 1- 10%%\n");
    printf (" 2- 15%%\n");
    printf (" 3- Others\n\n");
    printf ("* Enter your choice : ");
    scanf ("%d",&t);
    printf ("\n");
    if ( t == 1)
    {
        np = q*p*0.9;
    }
    else if ( t == 2)
    {
        np = q*p*0.85;
    }
    else if ( t == 3)
    {
        printf ("* Enter the other discount type in percent : ");
        scanf ("%f",&x);
        printf ("\n");
        x = (100-x)*0.01;
        np = q*p*x;
    }
    printf ("* The net price is %.2f\n\n",np);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
