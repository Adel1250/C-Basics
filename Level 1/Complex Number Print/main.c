#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float real;
    float img;
} Complex;

void print_comp ( Complex a )
{
    printf ("* (%.2f) + (%.2f)i\n\n",a.real,a.img);
}

int main()
{
    printf ("\n");
    printf ("** Complex Number Print **\n\n");
    Complex a;
    a.real = 5;
    a.img = 6;
    print_comp (a);
    printf ("*** Thanks ! ***\n\n");
}
