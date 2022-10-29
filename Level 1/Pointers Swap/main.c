#include <stdio.h>
#include <stdlib.h>

void swap (int *p1, int *p2)
{
    int c;
    c = *p1;
    *p1 = *p2;
    *p2 = c;
}

int main()
{
    int num1, num2;
    printf ("\n");
    printf ("** Pointers Swap **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&num1);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&num2);
    printf ("\n");
    swap(&num1,&num2);
    printf ("* The first number is %d\n\n",num1);
    printf ("* The second number is %d\n\n",num2);
    printf ("*** Thanks ! ***\n\n");
}
