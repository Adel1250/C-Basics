#include <stdio.h>
#include <stdlib.h>

int arrayCount(int arr[])
{
    int i = 0;
    while(arr[i])
    {
        i++;
    }
    return i;
}

void merge(int a[], int b[], int c[])
{
    int i, j, k;
    int n1 = arrayCount(a);
    int n2 = arrayCount(b);
    i = 0;
    j = 0;
    k = 0;
    while ( i < n1 && j < n2)
    {
        if ( a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while ( i < n1 )
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while ( j < n2 )
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int n1, n2, n3, i, j, k;
    printf ("\n\n");
    printf ("** Merging **\n\n");
    printf ("* Enter the number of elements of sorted list #1 : ");
    scanf ("%d",&n1);
    printf ("\n");
    int a[n1];
    for ( i = 0 ; i < n1 ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    printf ("* Enter the number of elements of sorted list #2 : ");
    scanf ("%d",&n2);
    printf ("\n");
    int b[n2];
    for ( j = 0 ; j < n2 ; j++ )
    {
        printf ("* Enter the term #%d : ",j+1);
        scanf ("%d",&b[j]);
        printf ("\n");
    }
    n3 = n1+n2;
    int c[n3];
    merge(a, b, c);
    printf ("* The merged list is : \n\n");
    for ( k = 0 ; k < n3 ; k++)
    {
        printf ("* %d",c[k]);
        printf ("\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
