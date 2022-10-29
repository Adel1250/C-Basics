#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, n, result = 1, i = 0;
    printf ("\n");
    printf ("* Enter the number : ");
    scanf ("%d",&x);
    printf ("\n");
    printf ("* Enter the power : ");
    scanf ("%d",&n);
    printf ("\n");
    while (i < n)
    {
        result *= x;
        i++;
    }
    printf ("* The result is %d\n\n",result);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
