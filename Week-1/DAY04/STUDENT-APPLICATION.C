/* 
Author: Rushabh Shah
Date of Creation: 8th Feb 2023
Subject: Student Application
*/

#include<stdio.h>
//#include<conio.h>
#define SIZE2

struct Student
{
    int sid;
    char name[30];
    float fees,maths,comp,eng,total,per:
    char grade;
    int flag;
}s[SIZE];

void scanStudentDetails();
void displayStudentDetails();
void calculateMarksheet(int i);

void main()
{
    int choice;
    while(1)
    {
        clrscr();
        printf("\n1) Create Students");
        printf("\n2) Display Students");
        printf("\n3) Exit");
        printf("\nEnter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:scanStudentDetails();
            break;
            case 2: displayStudentDetails();
            break;
            case 3: exit(0);
            default:printf("Invalid choice");
        }
    }
    getch();
}

void scanStudentDetails()
{
    float temp,i;
    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter the sid: ");
        scanf("%d%s",&s[i].sid,s[i].name);
        printf("\nEnter the fees: ");
        scanf("%f",&temp);
        s[i].fees=temp;
        printf("\nEnter the comp, eng, maths: ");
        scanf("%f",&temp);
        s[i].comp=temp;
        scanf("%f",&temp);
        s[i].eng=temp;
        scanf("%f",&temp);
        s[i].maths=temp;
        calculateMarkSheet(i);
    }
}

void calculateMarkSheet(int i)
{
    s[i].total=s[i].maths+s[i].eng+s[i].comp;
    s[i].per=s[i].total/3;
    if(s[i].per>=90)
    {
        s[i].grade='A'
    }
    else
    {
        s[i].grade='B';
    }
}


void displayStudentDetails()
{
    int i;
    printf("\nsid\tname\tfees\tcomp\tmaths\ttotal\tper\tgrade\n");
    for(i=0;i<SIZE;i++)
    {
        printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,
        s[i].name,s[i].fees,s[i].comp,s[i].comp,s[i].maths,s[i].total,s[i].per,s[i].grade);
    } 
}
