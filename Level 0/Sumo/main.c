#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, x, max, min;
    float avg;
    printf ("\n\n");
    printf ("** SUMO **\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    printf ("* Enter the term #1 : ");
    scanf ("%d",&x);
    printf ("\n");
    int product = x, sum = x;
    min = x;
    max = x;
    for ( i = 1  ; i < n ; i++ )
    {
        printf ("* Enter the term #%d : ",i+1);
        scanf ("%d",&x);
        printf ("\n");
        sum += x;
        product *= x;
        if ( x > max )
        {
            max = x;
        }
        if ( x < min )
        {
            min = x;
        }
    }
    avg = (sum*1.0)/n;
    printf ("* The sum is %d\n\n",sum);
    printf ("* The product is %d\n\n",product);
    printf ("* The average is %.2f\n\n",avg);
    printf ("* The minimum is %d\n\n",min);
    printf ("* The maximum is %d\n\n",max);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
