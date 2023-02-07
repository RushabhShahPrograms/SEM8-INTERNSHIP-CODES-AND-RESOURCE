/*
Author: Rushabh Shah
Date of Creation: 7th Feb 2023
Subject: Do-While Loop
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  char ch='A';
  int i=1,j=1;
  clrscr();
    do{
      i=0;
      do{
        textcolor(i);
        gotoxy(j,i+1);
        sound(200);
        delay(1);
        nosound();
        cprintf("%c",ch+i);
        i++;
      }while(i<=23);
      j++;
    }while(j<=80);
  getch();
}
