#include <stdio.h>
#include <stdlib.h>

void Arr_max_min (int pa[], int *pn, int *pmax, int *pmin)
{
    int i;
    *pmax = pa[0];
    *pmin = pa[0];
    for ( i = 1 ; i < *pn ; i++ )
    {
        if (pa[i] > *pmax)
            *pmax = pa[i];
        if (pa[i] < *pmin)
            *pmin = pa[i];
    }
}

int main()
{
    int n, i, max, min;
    printf ("\n");
    printf ("** Pointers Array Maximum & Minimum **\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&arr[i]);
        printf ("\n");
    }
    Arr_max_min (arr,&n,&max,&min);
    printf ("* The maximum number is %d\n\n",max);
    printf ("* The minimum number is %d\n\n",min);
    printf ("*** Thanks ! ***\n\n");
}
