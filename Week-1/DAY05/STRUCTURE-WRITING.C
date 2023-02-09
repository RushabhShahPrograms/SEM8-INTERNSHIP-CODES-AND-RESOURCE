/*
Author: Rushabh Shah
Date of Creation: 9th Feb 2023
Subject: Structure Writing
*/

#include<stdio.h>
#include<conio.h>
struct Student
{
  int sid;
  char name[30];
}s[2];

void scan()
{
  int i;
  FILE *fp;
  fp=fopen("student.txt","w");
  for(i=0;i<2;i++)
  {
    printf("\nEnter the sid and name: ");
    scanf("%d%s",&s[i].sid,s[i].name);
    fwrite(&s[i],sizeof(s[i],1,fp);
  }
  fclose();
}
           
void display()
           {
             clrscr();
             
           }
           \
