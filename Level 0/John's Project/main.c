#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf ("\n\n");
    printf ("** We need the length of the street , the distance between each two trees and \n\n the cost of each tree in dollars. **\n\n");
    float length, distance, cost1, costa;
    int number;
    printf ("* Enter the length of the street in (m) : ");
    scanf ("%f",&length);
    printf ("\n");
    printf ("* Enter the distance between each two trees (m) : ");
    scanf ("%f",&distance);
    printf ("\n");
    printf ("* Enter the cost of each street : ");
    scanf ("%f",&cost1);
    number = (length/distance)+1;
    costa = cost1 * number;
    printf ("\n");
    printf ("* The number of trees is %d\n\n",number);
    printf ("* The total cost is %.2f\n\n",costa);
    printf ("*** Thanks ! ***\n\n");
}
