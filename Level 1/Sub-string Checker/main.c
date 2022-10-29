#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substring (char s1[], char s2[])
{
    int m, n, i, j;
    m = strlen(s1);
    n = strlen(s2);
    for ( i = 0 ; i < m ; i++ )
    {
        for ( j = 0 ; j < n ; j++ )
        {
            if (s1[i+j] != s2[j])
            {
                break;
            }
        }
        if ( j == n)
            return 1;
    }

    return 0;
}

int main()
{
    char str1[30];
    char str2[10];
    int f;
    printf ("\n");
    printf ("** Sub-string Checker **\n\n");
    printf ("* Enter the main string : ");
    gets (str1);
    printf ("\n");
    printf ("* Enter the other string : ");
    gets (str2);
    f = substring (str1,str2);
    printf ("\n");
    if (f == 1)
        printf ("* This string is a subset of the main string.\n\n");
    else
        printf ("* This string is not a subset of the main string.\n\n");
    printf ("*** Thanks ! ***\n\n");
}
