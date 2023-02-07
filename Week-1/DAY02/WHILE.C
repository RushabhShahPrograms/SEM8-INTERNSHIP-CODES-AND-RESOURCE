/*
Author: Rushabh Shah
Date of Creation: 7th Feb 2023
Subject: While Loop Understanding
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  char ch='A';
  int i=1;j=1;
  clrscr();
  while(j<=80)
  {
    i=0;
    while(i<=23)
    {
      textcolor(i);
      gotoxy(j,i+1);
      sound(200);
      delay(1);
      nosound();
      cprintf("%c",ch+i);
      i++;
    }
    j++;
  }
  getch();
}
