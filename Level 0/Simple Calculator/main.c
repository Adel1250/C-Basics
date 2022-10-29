#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2;
    char op;
    printf ("\n");
    printf ("** Simple Calculator **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%f",&num1);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%f",&num2);
    printf ("\n");
    printf ("* Enter the operation's sign : ");
    scanf (" %c",&op);
    printf ("\n");
    if ( op == '+' )
    {
        printf ("* The sum is %.3f\n\n",num1+num2);
    }
    else if ( op == '-' )
    {
        printf ("* The difference is %.3f\n\n",num1-num2);
    }
    else if ( op == '*')
    {
        printf ("* The product is %.3f\n\n",num1*num2);
    }
    else
        printf ("* The quotient is %.3f\n\n",num1/num2);
    printf ("*** Thanks ! ***\n\n");
}
