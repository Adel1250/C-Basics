#include <stdio.h>
#include <stdlib.h>

float power(float x, int y)
{
    if (y < 0)
        return (power (x,y*(-1)));
    else if (y == 0)
        return 1.0;
    else
        return x*power(x,y-1);
}

int main()
{
    float num;
    int p;
    printf ("\n");
    printf ("** Recursive Power **\n\n");
    printf ("* Enter the number : ");
    scanf ("%f",&num);
    printf ("\n");
    printf ("* Enter the power : ");
    scanf ("%d",&p);
    printf ("\n");
    if (p < 0)
        printf ("* The result is %.3f\n\n",1/power(num,p));
    else
        printf ("* The result is %.2f\n\n",power(num,p));
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
