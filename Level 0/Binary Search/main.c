#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[15];
    int i, key, low, high, found, element, middle;
    for (i = 0 ; i < 15 ; i++)
    {
        a[i] = 2*i;
    }
    printf ("\n\n");
    printf ("* Enter the element that you need to search for : ");
    scanf ("%d",&key);
    printf ("\n");
    low = 0;
    high = 14;
    found = 0;
    element = 0;
    while (found == 0 && low <= high)
    {
        middle = (high + low)/2;
        if (key == a[middle])
        {
            found = 1;
            element = middle;
        }
        else if (key > a[middle])
        {
            low = middle + 1;
        }
        else
        {
            high = middle -1;
        }
    }
    if (found)
    {
        printf ("* Element found in location #%d\n\n",element);
    }
    else
    {
        printf ("* Element not found.\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
