#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[10], fname[10];
    printf ("\n");
    printf ("** Hello Name **\n\n");
    printf ("* Enter your first name : ");
    scanf ("%s",name1);
    printf ("\n");
    printf ("* Enter your family name : ");
    scanf ("%s",fname);
    printf ("\n");
    strcat (name1," ");
    char greet [] = "Hello ";
    printf ("** %s **\n\n",strcat (greet,strcat (name1,fname)));
    printf ("*** Thanks ! ***\n\n");
}
