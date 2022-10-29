#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n)
{
    int i, j, min, hold;
    for ( i = 0 ; i < n-1 ; i++ )
    {
        min = i;
        for ( j = i + 1 ; j < n ; j++ )
        {
            if ( a[j] < a[min] )
                min = j;
        }
        hold = a[i];
        a[i] = a[min];
        a[min] = hold;
    }
}

int main()
{
    int i, n;
    printf ("\n\n");
    printf ("** Selection Sort **\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for ( i = 0 ; i < n ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    selectionSort(a, n);
    printf ("* The sorted list is : \n\n");
    for ( i = 0 ; i < n ; i++)
    {
        printf ("* %d\n",a[i]);
    }
    printf ("\n");
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
