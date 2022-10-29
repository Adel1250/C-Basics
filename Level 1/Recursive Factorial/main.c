#include <stdio.h>
#include <stdlib.h>

int factorial(int x)
{
if (x == 0)
    return 1;
else
    return x*factorial(x-1);
}

int main()
{
int num;
printf ("\n");
printf ("** Recursive Factorial **\n\n");
printf ("* Enter the number : ");
scanf ("%d",&num);
printf ("\n");
printf ("* The result is %d\n\n",factorial(num));
printf ("*** Thanks ! ***\n\n");
return 0;
}
