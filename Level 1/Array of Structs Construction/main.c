#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int id;
} Student;

Student* construct (char name[], int id)
{
    Student *s = malloc(sizeof(Student));
    strcpy(s -> name, name);
    s -> id = id;
    return s;
}

int main()
{
    system("color 5f");
    printf ("\n");
    printf ("** Array of Structs Construction **\n\n");
    printf ("** Students Registration **\n\n");
    int n, i;
    char name[20];
    int id;
    printf ("* Enter the number of students : ");
    scanf ("%d",&n);
    printf ("\n");
    Student *students[n];
    for (i = 0 ; i < n ; i++)
    {
        printf ("* Enter the student #%d first name : ",i+1);
        scanf ("%s",name);
        printf ("\n");
        printf ("* Enter the student #%d ID : ",i+1);
        scanf ("%d",&id);
        printf ("\n");
        students[i] = construct(name, id);
        printf ("********************************************************************************************************\n\n");
    }
    for (i = 0 ; i < n ; i++)
    {
        printf ("* Student #%d\n\n",i+1);
        printf ("  Name : %s\n",students[i] -> name);
        printf ("  ID : %d\n\n",students[i] -> id);
    }
    printf ("*** Thanks ! ***\n\n");
}
