#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf ("\n\n");
    printf ("* Enter an integer : ");
    scanf ("%d",&x);
    printf ("\n");
    if (x%2 == 0)
    {
        printf ("* This integer is even.\n\n");
    }
    else
    {
        printf ("* This integer is odd.\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
