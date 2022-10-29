#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, i, j, sum = 0;
    printf ("\n");
    printf ("** Sum of two dimensional array **\n\n");
    printf ("* Enter the number of rows : ");
    scanf ("%d",&n1);
    printf ("\n");
    printf ("* Enter the number of columns : ");
    scanf ("%d",&n2);
    printf ("\n");
    int a[n1][n2];
    for ( i = 0 ; i < n1 ; i++ )
    {
        for ( j = 0 ; j < n2 ; j++ )
        {
            printf ("* Enter the value of term [%d][%d] : ",i,j);
            scanf ("%d",&a[i][j]);
            printf ("\n");
        }
    }
    printf ("** The two dimensional array is : \n\n");
    for ( i = 0 ; i < n1 ; i++ )
    {
        for ( j = 0 ; j < n2 ; j++ )
        {
            printf (" %d ",a[i][j]);
        }
        printf ("\n\n");
    }
    for ( i = 0 ; i < n1 ; i++ )
    {
        for ( j = 0 ; j < n2 ; j++ )
        {
            sum += a[i][j];
        }
        printf ("* The sum of row %d is %d\n\n",i,sum);
        sum = 0;
    }
    sum = 0;
    for ( j = 0 ; j < n2 ; j++ )
    {
        for ( i = 0 ; i < n1 ; i++ )
        {
            sum += a[i][j];
        }
        printf ("* The sum of column %d is %d\n\n",j,sum);
        sum = 0;
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
