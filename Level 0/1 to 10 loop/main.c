#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    printf ("\n\n");
    printf (" ");
    while (x <= 10)
    {
        printf ("%d",x);
        if (x < 10)
        {
            printf (" ");
        }
        x++;
    }
    printf ("\n\n");
    return 0;
}
