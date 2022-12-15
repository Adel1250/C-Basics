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

typedef union {
    struct {
        u8 B0:1;
        u8 B1:1;
        u8 B2:1;
        u8 B3:1;
        u8 B4:1;
        u8 B5:1;
        u8 B6:1;
        u8 B7:1;
    } Bit;

    u8 Byte;
} Register;

int main() {
    Register A;
    A.Byte = 0xFF;
    A.Bit.B0 = 0;
    printf("%x", A.Byte);
}
