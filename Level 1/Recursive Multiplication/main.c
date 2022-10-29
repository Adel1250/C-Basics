#include <stdio.h>
#include <stdlib.h>

int multi(int x, int y)
{
    if (y==0)
        return (0);
    else if (y>0)
        return (x+multi(x,y-1));
}

int main()
{
    int num1,num2;
    printf ("\n");
    printf ("** Recursive Multiplication **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&num1);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&num2);
    printf ("\n");
    printf ("* The result is %d\n\n",multi(num1,num2));
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
