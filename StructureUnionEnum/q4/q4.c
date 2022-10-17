#include<stdio.h>

struct students_DESD
{
    int rollnm;
    char name;
    int marks;
    char module[];
};

struct students_DASSD
{
    int rollnm;
    char name;
    int marks;
    char module[];
};

int main()
{
    struct students_DESD s1;
    struct students_DESD s2;
    
    printf("Enter DESD student rollnum: ");
    for(int i=0;i<3;i++)
    { scanf("%d",&s1.rollnm); }
    for(int i=0;i<3;i++)
    { printf("%d",s1.rollnm); }
}