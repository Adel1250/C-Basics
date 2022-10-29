#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, i, n;
    printf ("\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i = 0 ; i < n ; i++)
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&a[i]);
        printf ("\n");
        sum += a[i];
    }
    printf ("* Array sum is %d\n\n",sum);
    return 0;
}
