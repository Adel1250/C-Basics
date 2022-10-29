#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d, root1, root2;
    printf ("\n\n");
    printf ("** a(x^2) + bx + c **\n\n");
    printf ("* Enter the value of a : ");
    scanf ("%f",&a);
    printf ("\n");
    printf ("* Enter the value of b : ");
    scanf ("%f",&b);
    printf ("\n");
    printf ("* Enter the value of c : ");
    scanf ("%f",&c);
    printf ("\n");
    d = pow(b,2)-4*a*c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d))/2*a;
        root2 = (-b - sqrt(d))/2*a;
        printf ("* The first root is %.2f\n\n",root1);
        printf ("* The second root is %.2f\n\n",root2);
        printf ("* There are no imaginary roots.\n\n");
    }
    else if ( d == 0)
    {
        root1 = -b/2*a;
        printf ("* The root is %.2f\n\n",root1);
        printf ("* It is a perfect square equation.\n\n");
        printf ("* There are no imaginary roots.\n\n");
    }
    else
    {
        printf ("* Imaginary roots found !!\n\n");

    }
    printf ("*** Thanks ! ***\n\n");
}
