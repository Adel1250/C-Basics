#include <stdio.h>
#include <stdlib.h>

int sumArr (int *pa, int *pn)
{
    int i,  sum = 0;
    for ( i = 0 ; i < *pn ; i++ )
        sum += *(pa+i);
    return sum;
}

int main()
{
    int n, i;
    printf ("\n");
    printf ("** Pointers Array Sum **\n\n");
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
    printf ("* The sum is %d\n\n",sumArr (arr,&n));
    printf ("*** Thanks ! ***\n\n");
}
