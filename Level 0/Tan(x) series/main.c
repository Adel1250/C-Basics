#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sum = 0.0, x;
    int n, product = 1, i, j;
    printf ("\n\n");
    printf ("*** tan(x) series ***\n\n");
    printf ("* Enter the value of x in degrees : ");
    scanf ("%f",&x);
    x *= (3.14/180);
    printf ("\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    for ( i = 1 ; i <= n ; i++)
    {
        for ( j = 1 ; j <= i ; j++)
        {
            product *= j;
        }
        sum += pow (x,i)/product;
    }
    printf ("* The value is %.4f\n\n",sum);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
