#include <stdio.h>
#include <stdlib.h>

void drawLine (int n)
{
    int k = n-1;
    while (k--)
    {
        printf (" ");
    }
    while (n--)
    {
        printf ("*");
    }
    printf ("\n");
}

int main()
{
    int n, i;
    printf ("\n");
    printf ("** Arrow Pro **\n\n");
    printf (" Enter the number of rows : ");
    scanf ("%d",&n);
    printf ("\n");
    for ( i = 1 ; i <= n/2 ; i++ )
    {
        drawLine (i);
    }
    for ( i = (n/2)-1 ; i >= 1 ; i-- )
    {
        drawLine (i);
    }
}
