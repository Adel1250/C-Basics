#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, counter = 0;
    printf ("\n");
    printf ("** Digits Counter **\n\n");
    printf ("* Enter a number : ");
    scanf ("%d",&num);
    printf ("\n");
    if ( num == 0 )
    {
        printf ("* The number of digits is 1\n\n");
    }
    else
    {
        while ( num != 0)
        {
            num /= 10;
            counter ++;
        }
        printf ("* The number of digits is %d\n\n",counter);
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
