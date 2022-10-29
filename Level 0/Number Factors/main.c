#include <stdio.h>
#include <stdlib.h>
int main()
{
int num , i;
printf ("\n");
printf ("** Number Factors **\n\n");
printf ("* Enter a number : ");
scanf ("%d",&num);
printf ("\n");
printf ("* Number factors : ");
for ( i = 1 ; i < num ; i++ )
{
if (num % i == 0)
{
printf (" %d ",i);
}
}
printf ("\n\n*** Thanks ! ***\n\n");
return 0;
}
