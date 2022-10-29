#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, mark, i;
    float avg;
    printf ("\n\n");
    printf ("* Enter the number of students : ");
    scanf ("%d",&n);
    printf ("\n");
    for (i = 1 ; i <= n ; i++)
    {
        printf ("* Enter the mark of student %d : ",i);
        scanf ("%d",&mark);
        printf ("\n");
        sum += mark;
    }
    avg = (sum*1.0)/ n;
    printf ("* The class's average is %.2f\n\n",avg);
    printf ("*** Thanks ! ***\n\n");
}
