#include <stdio.h>
#include <stdlib.h>

int power (int x, int n)
{
    int i = 0, product = 1;
    for ( i = 0 ; i < n ; i++ )
    {
        product *= x;
    }
    return product;
}

int main()
{
    int num, count = 0, sum = 0, x, i;
    printf ("\n");
    printf ("** Armstrong Check **\n\n");
    printf ("* Enter a number : ");
    scanf ("%d",&num);
    printf ("\n");
    x = num;
    while (x != 0)
    {
        x /= 10;
        count ++;
    }
    printf ("* The number of digits is %d\n\n",count);
    x = num;
    for ( i = 0 ; i < count && x != 0 ; i++ )
    {
        sum += power(x%10, count);
        x /= 10;
    }
    if (sum == num)
        printf ("* This number is an Armstrong *\n\n");
    else
        printf ("* This number is not an Armstrong *\n\n");
    printf ("*** Thanks ! ***\n\n");
}
