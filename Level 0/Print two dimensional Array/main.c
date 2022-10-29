#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    printf ("\n");
    printf ("** Printing elements of multiple subscripted array **\n\n");
    int a[2][3];
    for ( i = 0 ; i < 2 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            printf ("* Enter the value of the term [%d][%d] : ",i,j);
            scanf ("%d",&a[i][j]);
            printf ("\n");
        }
    }
    printf ("** The two dimensional array is : \n\n");
    for ( i = 0 ; i < 2 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            printf (" %d ",a[i][j]);
        }
        printf ("\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
