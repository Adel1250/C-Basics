#include <stdio.h>
#include <stdlib.h>

void DrawLine(int length)
{
    while (length)
    {
        printf (" *");
        length--;
    }
    printf ("\n");
}

int main()
{
    int n, i;
    printf ("\n");
    printf ("** Arrow **\n\n");
    printf ("* Enter the number of rows : ");
    scanf ("%d",&n);
    printf ("\n");

    for ( i = 1 ; i <= n ; i++ )
        DrawLine(i);

    for ( i = n-1 ; i >= 1 ; i-- )
        DrawLine(i);

    return 0;

}
