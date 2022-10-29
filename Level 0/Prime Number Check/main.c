#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("\n");
    printf ("** Prime Number Check **\n\n");
    int num, i, f = 0;
    printf ("* Enter the number : ");
    scanf ("%d",&num);
    printf ("\n");
    for (i = 2 ; i <= num-1 ; i++)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1 || num == 0 || num == 1)
        printf ("* This number is not prime.\n\n");
    else
        printf ("* This number is prime.\n\n");
    printf ("*** Thanks ! ***\n\n");
}
