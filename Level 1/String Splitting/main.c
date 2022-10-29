#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "Hello=Beautiful";
    char *p1;
    char *p2;
    printf ("\n");
    printf ("** String Splitting **\n\n");
    p1 = strtok (str,"=");
    printf ("* %s\n\n",p1);
    p2 = strtok (NULL, "=");
    printf ("* %s\n\n",p2);
}
