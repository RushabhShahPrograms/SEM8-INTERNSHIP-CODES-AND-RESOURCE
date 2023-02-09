/*
Author: Rushabh Shah
Date of Creation: 9th Feb 2023
Subject: Pointers
*/
#include<stdio.h>
#include<conio.h>

void main()
{
  int x=9,z=10;
  float *y;
  float a[10];
  int i;
  clrscr();
  /*
    y=&x;
    printf("\n\n%d----%u",*y,y);
    
    y=&z;
    printf("\n\n%d----%u",*y,y);
  */
  y=a;
  for(i=0;i<10;i++)
  {
    printf("\nEnter the value: ");
    scanf("%f",y+i);
  }
  
  clrscr();
  for(i=0;i<10;i++)
  {
    printf("\nThe value is %f and address is %u",*(y+i),y+i);
  }
  getch();
}
