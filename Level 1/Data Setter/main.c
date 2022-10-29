#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[20];
}student;

void setter (student *p, int x, char *pname)
{
  p->id = x;
  strcpy (p->name,pname);
}

void print (student *st)
{
    printf ("* ID = %d\n\n* Name : %s\n\n",st->id,st->name);
}

int main()
{
printf ("\n");
printf ("** Data Setter **\n\n");
student student1;
setter (&student1,600,"John");
print (&student1);
printf ("*** Thanks ! ***\n\n");
}
