#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf ("\n");
    printf ("** 2D Array Trick **\n\n");
    int a[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    printf ("* %d\n\n",*(*(a+1)+2));
    printf ("*** Thanks ! ***\n\n");
}
