#include <stdio.h>
#include <stdlib.h>

int c;
int addition (int a, int b)
{
    c = a + b;
    return c;
}
void main()
{
    int x, y, z;
    printf ("\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&y);
    printf ("\n");
    z = addition (x,y);
    printf ("* The sum is %d\n\n",z);
    printf ("*** Thanks ! ***\n\n");
}
