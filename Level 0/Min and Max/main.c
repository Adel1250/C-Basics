#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    int max, min;
    printf ("\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&y);
    printf ("\n");
    printf ("* Enter the third number : ");
    scanf ("%d",&z);
    printf ("\n");
    max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    printf ("* The maximum number is %d\n\n",max);
    min = x;
    if (y < min)
    {
        min = y;
    }
    if (z < min)
    {
        min = z;
    }
    printf ("* The minimum number is %d\n\n",min);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
