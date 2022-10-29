#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int min;
    if (a > b)
        min = b;
    else
        min = a;
    while (min)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
    }
    return min;
}


int main()
{
    int a, b, GCD;
    printf ("\n");
    printf ("** GCD Calculation **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&a);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&b);
    printf ("\n");
    GCD = gcd(a,b);
    printf ("* The GCD is %d\n\n",GCD);
    printf ("*** Thanks ! ***\n\n");
}
