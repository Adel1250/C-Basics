#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100

typedef struct
{
    int items[MAXSIZE];
    int top;
} Stack;

Stack* initialize ()
{
    Stack *s = malloc(sizeof(Stack));
    s->top = 0;
    return s;
}

void push (Stack *s, int value)
{
    s -> items[s->top] = value;
    s -> top++;
}

int pop (Stack *s)
{
    int value;
    s -> top--;
    value = s -> items[s -> top];
    return value;
}

int isEmpty (Stack *s)
{
    if (s -> top == 0)
    {
        return 1;
    }
    else
        return 0;
}

void stackDtoB (int decimal)
{
    int x;
    Stack *s = initialize();
    while (decimal != 0)
    {
        x = decimal%2;
        push (s,x);
        decimal/=2;
    }
    while (!isEmpty(s))
    {
        printf ("%d",pop(s));
    }
}

int main()
{
    system("color 5f");
    printf ("\n");
    printf ("** Bitwise Operations **\n\n");
    while (1)
    {
        int num1, num2, ch1, ch2;
        printf ("* Enter the first number : ");
        scanf ("%d",&num1);
        printf ("\n");
        printf ("* Enter the second number : ");
        scanf ("%d",&num2);
        printf ("\n");
        printf ("* The two numbers in the Binary form : \n\n");
        printf ("  Number #1 : ");
        stackDtoB(num1);
        printf ("\n");
        printf ("  Number #2 : ");
        stackDtoB(num2);
        printf ("\n\n");
        printf ("* Bitwise Operations : \n\n");
        printf ("  1- AND\n  2- OR\n  3- NOT\n  4- XOR\n  5- Left Shift\n  6- Right Shift\n  7- EXIT\n\n");
        printf ("* Enter your choice : ");
        scanf ("%d",&ch1);
        printf ("\n");
        switch (ch1)
        {
        case 1:
            printf ("* Their AND is ");
            stackDtoB(num1&num2);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 2:
            printf ("* Their OR is ");
            stackDtoB(num1|num2);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 3:
            printf ("* Enter the number's index (1 or 2) : ");
            scanf ("%d",&ch2);
            printf ("\n");
            printf ("* Its NOT is ");
            if (ch2 == 1)
                printf ("%d",~num1);
            else
                printf ("%d",~num2);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 4:
            printf ("* Their XOR is ");
            stackDtoB(num1^num2);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 5:
            printf ("* Enter the number's index (1 or 2) : ");
            scanf ("%d",&ch2);
            printf ("\n");
            printf ("* Its NOT is ");
            if (ch2 == 1)
                stackDtoB(num1 << 1);
            else
                stackDtoB(num2 << 1);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 6:
            printf ("* Enter the number's index (1 or 2) : ");
            scanf ("%d",&ch2);
            printf ("\n");
            printf ("* Its NOT is ");
            if (ch2 == 1)
                stackDtoB(num1 >> 1);
            else
                stackDtoB(num2 >> 1);
            printf ("\n\n");
            printf ("*************************************************************************\n\n");
            break;
        case 7:
            printf ("*** Thanks ! ***\n\n");
            exit(0);
            break;
        default:
            printf ("XX Invalid Input XX\n\n");
        }
    }
}
