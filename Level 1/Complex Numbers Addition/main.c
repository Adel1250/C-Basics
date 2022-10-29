#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float real;
    float img;
} Complex;

Complex add_comp ( Complex a, Complex b )
{
    Complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

int main()
{
    Complex x;
    Complex y;
    Complex z;
    printf ("\n");
    printf ("** Complex Numbers Operations **\n\n");
    printf ("* The first Complex number : \n\n");
    printf ("* Enter the real number : ");
    scanf ("%f",&x.real);
    printf ("\n");
    printf ("* Enter the imaginary number : ");
    scanf ("%f",&x.img);
    printf ("\n");
    printf ("* The second Complex number : \n\n");
    printf ("* Enter the real number : ");
    scanf ("%f",&y.real);
    printf ("\n");
    printf ("* Enter the imaginary number : ");
    scanf ("%f",&y.img);
    printf ("\n");
    z = add_comp (x,y);
    printf ("* The sum is (%.2f) + (%.2f)i\n\n",z.real,z.img);
    printf ("** Thanks ! **\n\n");
}
