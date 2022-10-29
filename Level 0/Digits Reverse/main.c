#include <stdio.h>
#include <stdlib.h>

int reverse(int num)
{
    int r = 0;
    while (num != 0)
    {
        r += num%10;
        num /= 10;
        r *= 10;
    }
    return r/10;
}

int main()
{
    int num;
    printf ("\n");
    printf ("** Digits Reverse **\n\n");
    printf ("* Enter the number : ");
    scanf ("%d",&num);
    printf ("\n");
    printf ("* The reversed number is %d\n\n",reverse(num));
    printf ("*** Thanks ! ***\n\n");
}
