#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, x1, x2, x3, x4, x5;
    int remainder;
    printf ("\n\n");
    printf ("* Enter a 5-digit number : ");
    scanf ("%d",&x);
    printf ("\n");
    x5 = x%10;
    x = x/10;
    x4 = x%10;
    x = x/10;
    x3 = x%10;
    x = x/10;
    x2 = x%10;
    x = x/10;
    x1 = x%10;
    printf ("* The separated number is %d %d %d %d %d\n\n",x1,x2,x3,x4,x5);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}