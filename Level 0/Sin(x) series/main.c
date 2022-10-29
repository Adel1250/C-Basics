#include <stdio.h>
#include <stdlib.h>

float power (float x, float n)
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
    float sum = 0.0, x;
    int n, product = 1, i, j, k = 0;
    printf ("\n\n");
    printf ("*** sin(x) series ***\n\n");
    printf ("* Enter the value of x in degrees : ");
    scanf ("%f",&x);
    x *= (3.14/180);
    printf ("\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    for ( i = 1 ; i <= n ; i+=2)
    {
        for ( j = 1 ; j <= i ; j++)
        {
            product *= j;
        }
        sum += power(-1,k)*(power (x,i))/product;
        k++;
    }
    printf ("* sin(x) is %.4f\n\n",sum);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
