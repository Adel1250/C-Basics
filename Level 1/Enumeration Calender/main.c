#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum days {Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};
enum weeks {week1, week2, week3, week4, week5};

int main()
{
    system("color 5f");
    printf ("\n");
    printf ("** Enumeration Calender **\n\n");
    int July[5][7] = {{0, 0, 0, 0, 1, 2, 3}, {4, 5, 6, 7, 8, 9, 10}, {11, 12, 13, 14, 15, 16, 17},
                      {18, 19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30, 31}};
    printf ("* Eid AlAdha date is %d/7/2020\n\n",July[week5][Friday]);
    printf ("*** Thanks ! ***\n\n");
}
