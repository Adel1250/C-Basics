#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

int compare_complex ( Complex a , Complex b )
{
    int c;
    int d;
    c = sqrt((a.real*a.real)+(a.img*a.img));
    d = sqrt((b.real*b.real)+(b.img*b.img));
    if (c > d)
        return 1;
    else if (c < d)
        return -1;
    else return 0;
}

int main()
{
    int f;
    Complex a;
    Complex b;
    printf ("\n");
    printf ("** Complex Numbers Comparison **\n\n");
    printf ("* The first Complex number : \n\n");
    a = read_comp (a);
    printf ("* The second Complex number : \n\n");
    b = read_comp (b);
    f = compare_complex (a,b);
    if (f == 1)
        printf ("* The first Complex number is greater than the second one.\n\n");
    else if (f == -1)
        printf ("* The first Complex number is less than the second one.\n\n");
    else
        printf ("* The two Complex numbers are equal.\n\n");
    printf ("*** Thanks ! ***\n\n");
}
