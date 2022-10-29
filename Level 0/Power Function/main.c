#include <stdio.h>
#include <stdlib.h>

float power (float x, int n)
{
    int i = 0;
    float product = 1.0;
    for ( i = 0 ; i < n ; i++ )
    {
        product *= x;
    }
    return product;
}


int main()
{
    float num;
    int p;
    printf ("\n");
    printf ("** Power Function **\n\n");
    printf ("* Enter a number : ");
    scanf ("%f",&num);
    printf ("\n");
    printf ("* Enter the power : ");
    scanf ("%d",&p);
    printf ("\n");
    printf ("* The result is %.2f\n\n",power(num,p));
    return 0;
}
