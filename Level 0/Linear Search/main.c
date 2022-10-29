#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0, key, found, element;
    printf ("\n\n");
    printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");
    int a[n];
    for (i = 0 ; i < n ; i++)
    {
        printf ("* Enter the term #%d : ",i);
        scanf ("%d",&a[i]);
        printf ("\n");
    }
    printf ("* Enter the element you need to search for : ");
    scanf ("%d",&key);
    found = 0;
    i = 0;
    while (found == 0 && i < n)
    {
        if (a[i] == key)
        {
            found = 1;
            element = i;
        }
        i++;
    }
    printf ("\n");
    if (found)
    {
        printf ("* Found in location %d\n\n",element);
    }
    else
    {
        printf ("* Not found.\n\n");
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
