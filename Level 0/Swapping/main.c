#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("\n\n");
    printf ("*** Numbers Swapping ***\n\n");
    int a, b, c;
    printf ("* Enter the first number : ");
    scanf ("%d",&a);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&b);
    printf ("\n");
    c = a;
    a = b;
    b = c;
    printf ("* The first number is %d\n\n",a);
    printf ("* The second number is %d\n\n",b);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
