#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deblank (char s[])
{
    char *ptr;
    ptr = strtok (s," ");
    printf ("* The new string is ");
    while (ptr != NULL)
    {
        printf ("%s",ptr);
        ptr = strtok (NULL," ");
    }
    printf ("\n\n");
}

int main()
{
    char str[100];
    printf ("\n");
    printf ("** String De-blank **\n\n");
    printf ("* Enter a string : ");
    gets (str);
    printf ("\n");
    strlwr (str);
    deblank (str);
    printf ("*** Thanks ! ***\n\n");
}
