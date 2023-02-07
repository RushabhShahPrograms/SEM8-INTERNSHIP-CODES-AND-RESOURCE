/*
Author: Rushabh Shah
Date of Creation: 7th Feb 2023
Subject: For Loop
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch='A';
    int i,j;
    clrscr();
    for(j=1;j<=80;j++)
    {
      for(i=0;i<23;i++)
      {
        textcolor(i);
        gotoxy(j,i+1);
        sound(200);
        delay(1);
        nosound();
        cprintf("%c",ch+i);
      }
    }
  getch();
}
