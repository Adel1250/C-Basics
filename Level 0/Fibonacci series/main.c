#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, f, f1, f2;
    printf ("\n");
    printf ("*** Fibonacci series program ***\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    printf ("* Fibonacci series is 0  1 ");
    f1 = 0;
    f2 = 1;
    for ( i = 1 ; i < n ; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf (" %d ",f);
    }
    printf ("\n\n");
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
