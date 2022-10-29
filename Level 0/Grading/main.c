#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    char grade;
    printf ("\n");
    printf ("* Enter the student's mark : ");
    scanf ("%d",&mark);
    printf ("\n");
    switch (mark/10)
    {
    case 10:
        grade = 'A';
        break;
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default :
        grade = 'F';
    }
    printf ("* The grade is %c\n\n",grade);
    printf ("*** Thanks ! ***\n\n");
    return 0;
}
