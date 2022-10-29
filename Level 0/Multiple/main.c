#include <stdio.h>
void main()
{
    int x, y;
    printf ("\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&y);
    printf ("\n");
    if (x%y == 0)
    {
        printf ("* %d is a multiple of %d\n\n",x,y);
    }
    else
        printf ("* %d is not a multiple of %d\n\n",x,y);
    printf ("*** Thanks ! ***\n\n");
}
