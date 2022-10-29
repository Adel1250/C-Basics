#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    float average;
    printf ("\n");
    printf ("** Array Average & Deviation **\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int arr[n];
    for ( i = 0 ; i < n ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&arr[i]);
        printf ("\n");
        sum += arr[i];
    }
    average = (sum*1.0)/n;
    printf ("* The average is %.2f\n\n",average);
    i = 0;
    for ( i = 0 ; i < n ; i++ )
    {
        printf ("* The element #%d is %d and its deviation is %.2f\n\n",i+1,arr[i],(arr[i]*1.0)-average);
    }
    printf ("*** Thanks ! ***\n\n");
}
