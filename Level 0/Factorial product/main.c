#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, product = 1, i;
    printf ("\n\n");
    printf ("*** Factorial product Program ***\n\n");
    printf ("* Enter a positive integer : ");
    scanf ("%d",&x);
    printf ("\n");
    if ( x >= 0)
    {
        printf ("* The factorial product of %d is ( ",x);
        for (i = 1 ; i <= x ; i++)
        {
            printf ("%d",i);
            if (i < x)
            {
                printf (" * ");
            }
            product *= i;
        }
        printf (" ) = %d\n\n",product);
    }
    else
    {
        printf ("* This value is invalid.\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
