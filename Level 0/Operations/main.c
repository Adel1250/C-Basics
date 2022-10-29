#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x, y, sum, difference, multiplication, division, average, dev1, dev2, cube1, cube2;
    printf ("\n");
    printf ("** Operations **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%f",&x);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%f",&y);
    printf ("\n");
    printf ("* The two numbers are %.2f and %.2f\n\n",x,y);
    sum = x + y;
    difference = x - y;
    multiplication = x * y;
    division = x / y;
    average = sum / 2;
    cube1=pow(x,3);
    cube2=pow(y,3);
    dev1 = x - average;
    dev2 = y - average;
    printf ("* Cube of %.2f is %.2f\n\n",x,cube1);
    printf ("* Cube of %.2f is %.2f\n\n",y,cube2);
    printf ("* Sum is %.2f\n\n",sum);
    printf ("* Difference is %.2f\n\n",difference);
    printf ("* Multiplication is %.2f\n\n",multiplication);
    printf ("* Division is %.2f\n\n",division);
    printf ("* Average is %.2f\n\n",average);
    printf ("* Deviation of %.2f is %.2f\n\n",x,dev1);
    printf ("* Deviation of %.2f is %.2f\n\n",y,dev2);
    printf ("*** Thanks ! ***\n");
    return 0;
}
