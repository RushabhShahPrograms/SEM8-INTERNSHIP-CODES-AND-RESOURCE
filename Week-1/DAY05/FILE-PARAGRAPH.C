/*
Author: Rushabh Shah
Date of Creation: 9th Feb 2023
Subject: Get paragraph using strings in file
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  char ch;
  int ch1;
  char temp[30], name[30];
  clrscr();
  
  printf("\nEnter the file you want to create: ");
  scanf("%s",name);
  fp=fopen(name,"w");
  fflush(stdin);
  
  while((ch=getchar())!='\n')
  {
    putc(ch,fp);
  }
  fclose(fp);
  fp=fopen(name,"r");
  
  printf("\nThe content of the file is : \n");
  while((ch1=getc(fp))!=EOF)
  {
    printf("%c",ch1);
  }
  fclose(fp);
  getch();
}
