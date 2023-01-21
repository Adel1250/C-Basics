#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned char* decimalToBinary(unsigned short int decimalNumber)
{
    unsigned char* binaryRepresentation = malloc(32 * sizeof(unsigned char));
    unsigned char i = 0;

    for (i = 0; i <= 31; i++)
    {
        *(binaryRepresentation + i) = 0;
    }
    if (decimalNumber == 0)
    {
        *(binaryRepresentation + 31) = 0;
    }
    else
    {
        i = 31;
        while (0 != decimalNumber)
        {
            if (0 == decimalNumber % 2)
            {
                *(binaryRepresentation + i) = 0;
            }
            else
            {
                *(binaryRepresentation + i) = 1;
            }
            decimalNumber /= 2;
            i--;
        }
    }

    return binaryRepresentation;
}

int main()
{
    unsigned char* binaryRepresentation;
    unsigned short int decimalNumber;

    printf("* Enter the decimal number: ");
    scanf("%hu", &decimalNumber);
    printf("* The binary representation is: ");

    binaryRepresentation = decimalToBinary(decimalNumber);

    for (unsigned char i = 0; i <= 31; i++)
    {
        printf("%i", *(binaryRepresentation + i));
    }

    free(binaryRepresentation);
    binaryRepresentation = NULL;
    return 0;
}
