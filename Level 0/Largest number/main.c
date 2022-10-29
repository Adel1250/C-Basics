#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z;
    printf ("\n\n");
    printf ("* Enter the first integer : ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the second integer : ");
    scanf ("%d",&y);
    printf ("\n");
    printf ("* Enter the third integer : ");
    scanf ("%d",&z);
    printf ("\n");
    if ( x > y && x > z )
    {
        printf ("* %d is the greatest integer.\n\n",x);
    }
    else if ( y > x && y > z )
    {
        printf ("* %d is the greatest integer.\n\n",y);
    }
    else
    {
        printf ("* %d is the greatest integer.\n\n",z);
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
