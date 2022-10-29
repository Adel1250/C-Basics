#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void bubbleSort (int a[], int n)
{
    int pass, f = 0, temp, j;
    for ( pass = 1 ; pass < n && f == 0 ; pass++ )
    {
        f = 1;
        for ( j = 0 ; j < n-pass ; j++ )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                f = 0;
            }
        }
    }
}

int main()
{
    system("color 5f");
    printf ("\n");
    int i, n = 800000;
    printf ("** Bubble Sort **\n\n");
    /*printf ("* Enter the number of terms : ");
    scanf ("%d",&n);
    printf ("\n");*/
    int a[800000];
    clock_t start, end;
    for (i = 0 ; i < 800000 ; i++)
    {
        a[i] = n;
        n--;
    }
    start = clock();
    bubbleSort(a, n);
    end = clock();
    /*for (i = 0 ;  i < 1000000 ; i++)
    {
        printf ("* %d\n\n",a[i]);
    }*/
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("* Time taken: %f\n\n", duration);
    printf ("*** Thanks ! ***\n\n");
}
