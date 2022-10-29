#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
    printf ("(%.2f) + (%.2f)i",a.real,a.img);
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
    Complex sum;
    printf ("\n");
    printf ("** Complex Numbers Operations **\n\n");
    printf ("* The first Complex number : \n\n");
    a = read_comp (a);
    printf ("* The second Complex number : \n\n");
    b = read_comp (b);
    printf ("* The two Complex numbers are : \n\n ");
    print_comp(a);
    printf ("\n ");
    print_comp(b);
    printf ("\n\n");
    f = compare_complex (a,b);
    sum = add_comp(a,b);
    printf ("* The sum is ");
    print_comp(sum);
    printf ("\n\n");
    if (f == 1)
        printf ("* The first Complex number is greater than the second one.\n\n");
    else if (f == -1)
        printf ("* The first Complex number is less than the second one.\n\n");
    else
        printf ("* The two Complex numbers are equal.\n\n");
    printf ("*** Thanks ! ***\n\n");
}
