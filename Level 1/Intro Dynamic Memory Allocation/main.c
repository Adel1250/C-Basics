#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int i;
    p = (float *) malloc(200);
    printf ("\n");
    printf ("** Intro Dynamic Memory Allocation **\n\n");
    printf ("* The entered numbers : \n\n");
    if (p==NULL)
    {
        printf ("* Out of Memory *\n\n");
        exit (1);
    }
    p[0] = 1.3;
    p[1] = 1.25;
    p[2] = 3.7;
    p[3] = 6.3;
    for ( i = 0 ; i < 4 ; i++ )
        printf ("* %.2f \n",p[i]);
    free (p);
    printf ("\n*** Thanks ! ***\n\n");
}
