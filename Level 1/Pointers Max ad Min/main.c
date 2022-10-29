#include <stdio.h>
#include <stdlib.h>

void max_min (int *p1, int *p2, int *p3, int *pmax, int *pmin)
{
    *pmax = *p1;
    if (*p2 > *pmax)
        *pmax = *p2;
    if (*p3 > *pmax)
        *pmax = *p3;

    *pmin = *p1;
    if (*p2 < *pmin)
        *pmin = *p2;
    if (*p3 < *pmin)
        *pmin = *p3;

}

int main()
{
    int num1, num2, num3, max, min;
    printf ("\n");
    printf ("** Pointers Maximum & Minimum **\n\n");
    printf ("* Enter the first number : ");
    scanf ("%d",&num1);
    printf ("\n");
    printf ("* Enter the second number : ");
    scanf ("%d",&num2);
    printf ("\n");
    printf ("* Enter the third number : ");
    scanf ("%d",&num3);
    printf ("\n");
    max_min(&num1,&num2,&num3,&max,&min);
    printf ("* The maximum number is %d\n\n",max);
    printf ("* The minimum number is %d\n\n",min);
    printf ("*** Thanks ! ***\n\n");
}
