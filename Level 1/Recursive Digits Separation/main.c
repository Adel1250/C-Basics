#include <stdio.h>
#include <stdlib.h>

void seprec (int ptr)
{
    if (ptr == 0)
        return;
    else
        seprec (ptr/10);
    printf (" %d ",ptr%10);
}

int main()
{
    int num;
    printf ("\n");
    printf ("** Recursive Digits Separation **\n\n");
    printf ("* Enter a number : ");
    scanf ("%d",&num);
    printf ("\n");
    printf ("* The separated number is ");
    seprec (num);
    printf ("\n\n");
    printf ("*** Thanks ! ***\n\n");
}
