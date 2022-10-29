#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int n, num, counter = 0;


int infinity()
{
    srand (time(0));
    n = 1+(rand()%100);
    do
    {
        printf ("* Enter a number between 1 and 100 inclusive : ");
        scanf ("%d",&num);
        printf ("\n");
        if ( num == n )
        {
            printf ("* You won ! *\n\n");
            break;
        }
        else if ( num < n )
        {
            printf ("* The random number is HIGHER ! *\n\n");
        }
        else
            printf ("* The random number is LOWER ! *\n\n");
        counter ++;
    }
    while (num != n);
    return counter;
}


int limitted()
{
    int i;
    srand (time(0));
    n = 1+(rand()%100);
    for ( i = 0 ; i < 5 ; i++ )
    {
        counter++;
        printf ("* Enter a number between 1 and 100 inclusive : ");
        scanf ("%d",&num);
        printf ("\n");
        if ( num == n )
        {
            printf ("* You won ! *\n\n");
            break;
        }
        else if ( num < n )
        {
            printf ("* The random number is HIGHER ! *\n\n");
        }
        else
            printf ("* The random number is LOWER ! *\n\n");
    }
    if ( i == 5 )
    {
        printf ("* You lost ! *\n\n");
    }
    return counter;
}


int main()
{
    int ch, co1, co2;
    printf ("\n");
    printf ("** Guess Game **\n\n");
    printf ("* Choose a Mode :\n\n");
    printf (" 1- INFINITY\n");
    printf (" 2- LIMITTED\n\n");
    printf ("* Enter your choice (1,2) : ");
    scanf ("%d",&ch);
    printf ("\n");
    if ( ch != 1 && ch != 2 )
    {
    printf ("* Your choice is invalid\n\n");
    printf ("*** Thanks ! ***\n\n");
    exit(0);
    }
    printf ("* Let's start the GAME ! *\n\n");
    if (ch == 1)
    {
        co1 = infinity ();
        printf ("* You did %d attempt(s)\n\n",co1+1);
    }
    else
    {
        co2 = limitted ();
        printf ("* You did %d attempt(s)\n\n",co2);
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
