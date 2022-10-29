#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse (char *arr)
{
    char *rev = malloc (strlen (arr) + 1);
    int n = strlen (arr);
    int i, j = n-1;
    for ( i = 0 ; i <  n ; i++ )
    {
        *(rev + i) = *(arr + j);
        j--;
    }
    rev[n] = '\0';
    return rev;
}

int main()
{
    printf ("\n");
    printf ("** String Reverse **\n\n");
    printf ("* Enter a string : ");
    char a[100];
    gets (a);
    printf ("\n");
    printf ("* The reversed string is %s\n\n",reverse(a));
    printf ("*** Thanks ! ***\n\n");
}
