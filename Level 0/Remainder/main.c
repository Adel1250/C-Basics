#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, remainder;
    printf ("\n\n");
    printf ("* Enter the first number = ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the second number = ");
    scanf ("%d",&y);
    printf ("\n");
    remainder = x % y;
    printf ("* Remainder is %d\n\n",remainder);
    printf ("*** Thanks ! ***\n\n");
}
