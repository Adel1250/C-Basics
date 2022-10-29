#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci (n-1) + fibonacci (n-2));
}

int main()
{
    int n;
    printf ("\n");
    printf ("** Recursive Fibonacci **\n\n");
    printf ("* Enter the number of the term : ");
    scanf ("%d",&n);
    printf ("\n");
    printf ("* The result is %d\n\n",fibonacci(n));
    printf ("*** Thanks ! ***\n\n");
}
