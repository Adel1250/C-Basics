#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float real;
    float img;
} Complex;

Complex read_comp ( Complex a )
{
    printf ("* Enter the real number : ");
    scanf ("%f",&a.real);
    printf ("\n");
    printf ("* Enter the imaginary number : ");
    scanf ("%f",&a.img);
    printf ("\n");
    return a;
}

void print_comp ( Complex a )
{
    printf ("* (%.2f) + (%.2f)i\n\n",a.real,a.img);
}

int main()
{
    Complex a;
    printf ("\n");
    printf ("** Complex Number Read **\n\n");
    a = read_comp (a);
    print_comp (a);
    printf ("*** Thanks ! ***\n\n");
}
