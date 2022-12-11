#include <stdio.h>
#include <stdlib.h>

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;

typedef float f32;
typedef double f64;
typedef long double f128;


int main() {
    printf("Size of u8 is %d\n", (int)sizeof(u8));
    printf("Size of u16 is %d\n", (int)sizeof(u16));
    printf("Size of u32 is %d\n", (int)sizeof(u32));
    printf("Size of s8 is %d\n", (int)sizeof(s8));
    printf("Size of s16 is %d\n", (int)sizeof(s16));
    printf("Size of s32 is %d\n", (int)sizeof(s32));
    printf("Size of f32 is %d\n", (int)sizeof(f32));
    printf("Size of f64 is %d\n", (int)sizeof(f64));
    printf("Size of f128 is %d\n", (int)sizeof(f128));
}
