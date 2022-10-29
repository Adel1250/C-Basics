#include <stdio.h>
#include <stdlib.h>

int gcdrec (int num1, int num2)
{
    int x;
    if (num1 < num2)
        return gcdrec (num2, num1);
    x = num1 % num2;
    if (x == 0)
        return num2;
    else
        return (gcdrec (num2, x));
}

int main()
{
    int num1, num2;
    printf ("\n");
    printf ("** Recursive GCD **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&num1);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&num2);
    printf ("\n");
    printf ("* The GCD is %d\n\n",gcdrec(num1,num2));
    printf ("*** Thanks ! ***\n\n");
}
