#include <stdio.h>
#include <stdlib.h>

void nmax_min (int *pn, int *pnmax, int *pnmin)
{
    int num, i;
    printf ("* Enter the term #1 : ");
    scanf ("%d",&num);
    printf ("\n");
    *pnmax = num;
    *pnmin = num;
    for ( i = 1 ; i < *pn ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&num);
        printf ("\n");
        if (num > *pnmax)
            *pnmax = num;
        if (num < *pnmin)
            *pnmin = num;
    }
}

int main()
{
    int n, max, min;
    printf ("\n");
    printf ("** Pointers Maximum & Minimum PRO **\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    nmax_min (&n,&max,&min);
    printf ("* The maximum number is %d\n\n",max);
    printf ("* The minimum number is %d\n\n",min);
    printf ("*** Thanks ! ***\n\n");
}
