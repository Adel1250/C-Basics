#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;

double calculateArea(triangle *tr)
{
    double p = (tr->a + tr->b + tr->c) / 2.0;
    return sqrt(p * ((p - tr->a) * (p - tr->b) * (p - tr->c)));
}

void sort_by_area(triangle* tr, int n)
{
    int pass, f = 0, j;
    for ( pass = 1 ; pass < n && f == 0 ; pass++ )
    {
        f = 1;
        for ( j = 0 ; j < n-pass ; j++ )
        {
            if (calculateArea(&tr[j]) > calculateArea(&tr[j+1]))
            {
                triangle temp = tr[j];
                tr[j] = tr[j+1];
                tr[j+1] = temp;
                f = 0;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    printf("Enter the dimensions of each triangle:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    printf("Sorted triangles with respect to their areas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}
