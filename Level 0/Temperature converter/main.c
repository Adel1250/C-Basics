#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float t, c, f;
    printf ("\n");
    printf ("* Enter the value of temperature : ");
    scanf ("%f",&t);
    printf ("\n");
    printf ("** Choose one of the following methods of conversion :\n\n 1- Fahrenheit to Celsius.\n 2- Celsius to Fahrenheit.\n\n");
    printf ("* Enter your choice : ");
    scanf ("%d",&x);
    if (x==1)
    {
        c = (t-32.0)*5/9;
        printf ("\n");
        printf ("* The value of temperature in Celsius is %.2f\n\n",c);
    }
    else if (x==2)
    {
        f = t*1.8+32;
        printf ("\n");
        printf ("* The value of temperature in Fahrenheit is %.2f\n\n",f);
    }
    else
    {
        printf ("\n* Your choice is invalid. \n\n");
    }
    printf ("*** Thanks ! ***\n\n");
}
