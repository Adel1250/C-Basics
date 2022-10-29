#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int min;
    if ( a > b )
        min = b;
    else
        min = a;
    while (min)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
    }
    return min;
}

int main()
{
    int a, b, area1t;
    printf ("\n");
    printf ("** Tiles Application **\n\n");
    printf ("* Enter the length of the floor : ");
    scanf ("%d",&a);
    printf ("\n");
    printf ("* Enter the width of the floor : ");
    scanf ("%d",&b);
    printf ("\n");
    area1t = gcd(a,b)*gcd(a,b);
    printf ("* The area of each tile is %d\n\n",area1t);
    printf ("* The number of tiles in this area of floor is %d tiles\n\n",(a*b)/(area1t));
    printf ("*** Thanks ! ***\n\n");
}
