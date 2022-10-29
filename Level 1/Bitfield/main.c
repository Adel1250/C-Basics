#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    /*unsigned*/ int i:1;
    /*unsigned*/ int k:4;
    int x;
} struct1;

typedef union
{
    /*unsigned*/ int i:1;
    /*unsigned*/ int k:4;
    int x;
} union1;

int main()
{
    struct1 s1 = {1,13,13};
    printf ("\n BITFIELD");
    printf ("\n\n %d %d %d %d\n\n",sizeof(s1),s1.i,s1.k,s1.x);
    union1 u1;
    u1.x = 0;
    u1.i = 1;
    u1.k = 12;
    printf (" %d %d %d %d\n\n",sizeof(u1),u1.i,u1.k,u1.x);
}
