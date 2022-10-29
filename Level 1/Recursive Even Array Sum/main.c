#include <stdio.h>
#include <stdlib.h>

int recevArrSum (int pa[], int n)
{
    int count = 0, i, j = 0;
    for ( i = 0 ; i < n ; i++ )
    {
        if (pa[i] % 2 == 0)
            count ++;
    }
    int arreven[count];
    for ( i = 0 ; i < n ; i++ )
    {
        if (pa[i] % 2 == 0)
        {
            arreven[j] = pa[i];
            j++;
        }

    }
    if (count == 0)
        return 0;
    else
        return arreven[count-1] + recevArrSum(arreven,count-1);
}

int main()
{
    int n, i;
    printf ("\n");
    printf ("** Recursive Even Sum **\n\n");
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
    printf ("* The sum of even numbers is %d\n\n",recevArrSum(arr,n));
    printf ("*** Thanks ! ***\n\n");
}
