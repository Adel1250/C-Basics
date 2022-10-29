#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, n3, i, j, k = 0, f1 = 0, f2 = 0, pass1, pass2, swap1, swap2, sum = 0, product = 1;
    float average;
    printf ("\n");
    printf ("** COMBO **\n\n");
    printf ("* Enter the number of terms of list #1 : ");
    scanf ("%d",&n1);
    printf ("\n");
    int a[n1];
    for ( i = 0 ; i < n1 ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    for (pass1 = 1 ; pass1 < n1 && f1 == 0; pass1++)
    {
        f1 = 1;
        for (i = 0 ; i < n1-pass1 ; i++)
        {
            if (a[i] > a[i+1])
            {
                swap1 = a[i];
                a[i] = a[i+1];
                a[i+1] = swap1;
                f1 = 0;
            }
        }
    }
    printf ("* Enter the number of terms of list #2 : ");
    scanf ("%d",&n2);
    printf ("\n");
    int b[n2];
    for ( j = 0 ; j < n2 ; j++ )
    {
        printf ("* Enter the term #%d : ",j+1);
        scanf ("%d",&b[j]);
        printf ("\n");
    }
    for (pass2 = 1 ; pass2 < n2 && f2 == 0; pass2++)
    {
        f2 = 1;
        for (j = 0 ; j < n2-pass2 ; j++)
        {
            if (b[j] > b[j+1])
            {
                swap2 = b[j];
                b[j] = b[j+1];
                b[j+1] = swap2;
                f2 = 0;
            }
        }
    }
    n3 = n1 + n2;
    int c[n3];
    i = 0;
    j = 0;
    while ( i < n1 && j < n2 )
    {
        if ( a[i] <= b[j] )
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else if ( b[j] <= a[i] )
        {
            c[k] = b[j];
            k++;
            j++;
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
    printf ("* The Merged list is : \n\n");
    printf ("\n");
    for ( i = 0 ; i < n3 ; i++ )
    {
        printf ("* %d",c[i]);
        printf ("\n");
        sum += c[i];
        product *= c[i];
    }
    average = (sum*1.0) / n3;
    printf ("\n* The sum of the merged list is %d\n\n",sum);
    printf ("* The average of the merged list is %.2f\n\n",average);
    printf ("* The product of the merged list is %d\n\n",product);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
