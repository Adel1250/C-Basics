#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("\n\n");
    int i, f = 1, count = 0;
    char x[128];
    printf ("* Enter a word : ");
    gets (x);
    printf ("\n");
    while ( x[count] != '\0')
    {
        count++;
    }
    for ( i = 0 ; i < count/2 ; i++ )
    {
        if ( x[i] != x[count-i-1] )
        {
            f = 0;
            break;
        }
    }
    if (f == 1)
    {
        printf ("* This is a PALINDROME.\n\n");
    }
    else
        printf ("* This is not a XX PALINDROME XX\n\n");
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
