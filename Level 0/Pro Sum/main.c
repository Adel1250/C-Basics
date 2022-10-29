#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, x, n, i;
    printf ("\n\n");
    printf ("* Enter the number of elements : ");
    scanf ("%d",&n);
    printf ("\n");
    for (i=1 ; i<=n ; i++)
    {
        printf ("* Enter number %d : ",i);
        scanf ("%d",&x);
        printf ("\n");
        sum += x;
    }
    printf ("* The sum is %d\n\n",sum);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
