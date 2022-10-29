#include <stdio.h>
#include <stdlib.h>

int count (int number)
{
    int k = 0;
    while (number != 0)
    {
        number /= 10;
        k++;
    }
    return k;
}

int main()
{
    int num;
    printf ("\n");
    printf ("** Digits Count Function **\n\n");
    printf ("* Enter the number : ");
    scanf ("%d",&num);
    printf ("\n");
    printf ("* The number of digits is %d\n\n",count(num));
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
