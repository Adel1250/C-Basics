#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, temp, hole, value;
    printf("\n** Insertion Sort **\n\n");
    printf("* Enter the number of array elements: ");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    for(i = 0; i < n; i++)
    {
        printf("* Enter the element #%d: ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    for(i = 1; i < n; i++)
    {
        hole = i;
        value = arr[i];
        while(hole > 0 && arr[hole-1] > value)
        {
            temp = arr[hole];
            arr[hole] = arr[hole-1];
            arr[hole-1] = temp;
            hole--;
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("* %d\n\n", arr[i]);
    }
    printf("*** Thanks! ***\n\n");
}
