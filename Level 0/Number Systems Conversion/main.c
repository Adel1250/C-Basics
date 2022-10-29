#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dectobin (int num)
{
    int remainder = 0, j = 1, Bin = 0;
    while (num != 0)
    {
        remainder = num % 2;
        Bin += remainder * j;
        j *= 10;
        num /= 2;
    }
    return Bin;
}

int bintodec (int num)
{
    int remainder = 0, j = 0, dec = 0;
    while (num != 0)
    {
        remainder = num%10;
        dec += remainder*pow(2,j);
        num /= 10;
        j++;
    }
    return dec;
}

int octtodec (int num)
{
    int remainder = 0, j = 0, dec = 0;
    while (num != 0)
    {
        remainder = num%10;
        dec += remainder*pow(8,j);
        num /= 10;
        j++;
    }
    return dec;
}

int main()
{
    system("color 5f");
    int num, ch, dec, bin;
    printf ("\n");
    printf ("** Number Systems Conversion **\n\n");
    printf ("* Note : NO ""."" available for now *\n\n");
    printf ("* Options : \n\n");
    printf (" 1- Decimal to Binary\n 2- Decimal to Octal\n 3- Decimal to Hexadecimal\n 4- Binary to Decimal\n 5- Octal to Decimal\n");
    printf (" 6- Hexadecimal to Decimal\n 7- Binary to Octal\n 8- Binary to Hexadecimal\n 9- Octal to Binary\n 10- Octal to Hexadecimal\n");
    printf (" 11- Hexadecimal to Binary\n 12- Hexadecimal to Octal\n\n");
    printf ("* Enter your choice (#) : ");
    scanf ("%d",&ch);
    printf ("\n");
    if (ch == 1)
    {
        printf ("* Enter the Decimal number : ");
        scanf ("%d",&num);
        printf ("\n");
        printf ("* The Binary conversion is : %d\n\n",dectobin(num));
    }
    else if (ch == 2)
    {
        printf ("* Enter the Decimal number : ");
        scanf ("%d",&num);
        printf ("\n");
        printf ("* The Octal conversion is : %o\n\n",num);
    }
    else if (ch == 3)
    {
        printf ("* Enter the Decimal number : ");
        scanf ("%d",&num);
        printf ("\n");
        printf ("* The Hexadecimal conversion is %x\n\n",num);
    }
    else if (ch == 4)
    {
        printf ("* Enter the Binary number : ");
        scanf ("%d",&num);
        printf ("\n");
        printf ("* The Decimal conversion is %d\n\n",bintodec(num));
    }
    else if (ch == 5)
    {
        printf ("* Enter the Octal number : ");
        scanf ("%o",&num);
        printf ("\n");
        printf ("* The Decimal conversion is %d\n\n",num);
    }
    else if (ch == 6)
    {
        printf ("* Enter the Hexadecimal number : ");
        scanf ("%x",&num);
        printf ("\n");
        printf ("* The Decimal conversion is %d\n\n",num);
    }
    else if (ch == 7)
    {
        printf ("* Enter the Binary number : ");
        scanf ("%d",&num);
        printf ("\n");
        int dec = bintodec(num);
        printf ("* The Octal conversion is %o\n\n",dec);
    }
    else if (ch == 8)
    {
        printf ("* Enter the Binary number : ");
        scanf ("%d",&num);
        printf ("\n");
        int dec = bintodec(num);
        printf ("* The Hexadecimal conversion is %x\n\n",dec);
    }
    else if (ch == 9)
    {
        printf ("* Enter the Octal number : ");
        scanf ("%d",&num);
        printf ("\n");
        dec = octtodec(num);
        bin = dectobin(dec);
        printf ("* The Binary conversion is %d\n\n",bin);

    }
    else if (ch == 10)
    {
        printf ("* Enter the Octal number : ");
        scanf ("%o",&num);
        printf ("\n");
        printf ("* The Hexadecimal conversion is %x\n\n",num);
    }
    else if (ch == 11)
    {
        char hex[100];
        int i = 0;
        printf ("* Enter the Hexadecimal number : ");
        scanf ("%s",hex);
        printf ("\n* The Binary conversion is ");
        while (hex[i])
    {
        switch (hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        }
        i++;
    }
        printf ("\n\n");
    }
    else if (ch == 12)
    {
        printf ("* Enter the Hexadecimal number : ");
        scanf ("%x",&num);
        printf ("\n");
        printf ("* The Octal conversion is %o\n\n",num);
    }

    printf ("*** Thanks ! ***\n\n");
}
