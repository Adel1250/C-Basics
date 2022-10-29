#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,  n, j, k, counter = 0;
    printf ("\n\n");
    printf ("* Enter the number of elements : ");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i = 0 ; i < n ; i++)
    {
        printf ("* Enter the value of term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    for (i = 0 ; i < n ; i++)
    {
        for (j = i+1 ; j < n ; j++)
        {
            if (a[i] == a[j])
            {
                for ( k = j ; k < n-1 ; k++)
                {
                    a[k] = a[k+1];
                }
                j--;
                n--;
                counter ++;
                break;
            }
        }
    }
    printf ("* The unique list is :\n\n");
    for ( i = 0 ; i < n ; i++)
    {
        printf ("* %d",a[i]);
        printf ("\n\n");
    }
    printf ("* No. of duplicated numbers is %d\n\n",counter);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
