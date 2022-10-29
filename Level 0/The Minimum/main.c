#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, min, location;
    printf ("\n\n");
    printf ("*** The Minimum ***\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    printf ("* Enter the term #1 : ");
    scanf ("%d",&a[0]);
    printf ("\n");
    min = a[0];
    for ( i = 1 ; i < n ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( a[i] < min )
        {
            location = i;
        }
    }
    for ( i = 0 ; i < n ; i++)
    {
        printf ("* %d",a[i]);
        if (a[location] == a[i])
        {
            printf ("   <=== Minimum");
        }
        printf ("\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
