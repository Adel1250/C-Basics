#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int year;
    char model[20];
    int speed;
} car;

car* construct (int x, char str[], int y)
{
    car *ptr;
    ptr  = (car*)malloc(sizeof(car));
    ptr-> year = x;
    strcpy(ptr->model,str);
    ptr-> speed = y;
    return ptr;
}

void accelerate (car *pt, int acc)
{
    pt-> speed += acc;
}

void decelerate (car *pt, int dec)
{
    pt-> speed -= dec;
}

void print (car *pc)
{
    printf ("* Year : %d\n* Model : %s\n* Speed : %d\n\n",pc-> year,pc-> model,pc-> speed);
}

int main()
{
    printf ("\n");
    printf ("** Constructor Concept **\n\n");
    car *p;
    p = construct (2012,"Kia",100);
    printf ("* Car details :\n\n");
    print (p);
    accelerate (p,20);
    print (p);
    decelerate (p,10);
    print (p);
    printf ("*** Thanks ! ***\n\n");
}
