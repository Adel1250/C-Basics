#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main()
{
    printf ("\n");
    printf ("*** Area or Perimeter program ***\n\n");
    printf ("** Choose a shape : \n\n");
    printf (" 1- Square\n");
    printf (" 2- Rectangle\n");
    printf (" 3- Triangle\n");
    printf (" 4- Circle\n\n");
    int x, pa;
    printf ("* Enter your choice : ");
    scanf ("%d",&x);
    printf ("\n");
    if (x != 1 && x != 2 && x != 3 && x != 4)
    {
        printf ("* Your choice is invalid.\n\n");
        exit (0);
    }
    printf ("** Do you need Perimeter or Area ?\n\n");
    printf (" 1- Perimeter\n");
    printf (" 2- Area\n\n");
    printf ("* Enter your choice : ");
    scanf ("%d",&pa);
    printf ("\n");
    if (pa != 1 && pa !=2)
    {
        printf ("* Your choice is invalid.\n\n");
        exit(0);
    }
    if (x==1)
    {
        float s,p1,a1;
        printf ("* Enter the length of one side : ");
        scanf ("%f",&s);
        printf ("\n");
        if (pa == 1)
        {
            p1 = 4*s;
            printf ("* Perimeter is %.2f\n\n",p1);
        }
        else if (pa == 2)
        {
            a1 = s*s;
            printf ("* Area is %.2f\n\n",a1);
        }
    }
    else if (x==2)
    {
        float l, w, p2, a2;
        printf ("* Enter the length : ");
        scanf ("%f",&l);
        printf ("\n");
        printf ("* Enter the width : ");
        scanf ("%f",&w);
        printf ("\n");
        if (pa == 1)
        {
            p2 = 2*(l+w);
            printf ("* Perimeter is %.2f\n\n",p2);
        }
        else if (pa == 2)
        {
            a2 = l*w;
            printf ("* Area is %.2f\n\n",a2);
        }
    }
    else if (x==3)
    {
        if (pa == 2)
        {
            float b,h;
            printf ("* Enter the length of base : ");
            scanf ("%f",&b);
            printf ("\n");
            printf ("* Enter the length of height : ");
            scanf ("%f",&h);
            printf ("\n");
            float a3;
            a3 = 0.5*b*h;
            printf ("* The area is %.2f\n\n",a3);
        }
        else if (pa == 1)
        {
            float l1, l2, l3;
            printf ("* Enter the length of the first side : ");
            scanf ("%f",&l1);
            printf ("\n");
            printf ("* Enter the length of the second side : ");
            scanf ("%f",&l2);
            printf ("\n");
            printf ("* Enter the length of the third side : ");
            scanf ("%f",&l3);
            printf ("\n");
            float p3;
            p3 = l1 + l2 + l3;
            printf ("* Perimeter is %.2f\n\n",p3);
        }
    }
    else if (x == 4)
    {
        float r;
        printf ("* Enter the value of the radius : ");
        scanf ("%f",&r);
        printf ("\n");
        if (pa == 1)
        {
            float p4;
            p4 = 2*PI*r;
            printf ("* Circumference is %.2f\n\n",p4);
        }
        else if (pa == 2)
        {
            float a4;
            a4 = PI*r*r;
            printf ("* Area is %.2f\n\n",a4);
        }
    }
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
