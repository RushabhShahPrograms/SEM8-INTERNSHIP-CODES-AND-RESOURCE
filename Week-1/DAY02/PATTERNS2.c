/*
Author: Rushabh Shah
Date of Creation: 6th Feb 2023
Subject: To print two or more patterns in horizontal line

Output of the code ->

*         *          *
**        **         **
***       ***        ***

*/

#include<stdio.h>
#include<conio.h>

void main()
{
  
  //initialize variables
  int i,j,l,a,size;
  char ch;
  
  clrscr();
  
  //Adding printing statements and scanning function
  printf("Total 3 patterns will print in horizontal line");
  printf("\nEnter the size of pattern: ");
  scanf("%d",&size);
  printf("\nEnter the character you want to print: ");
  scanf(" %c",&ch); //add a space before %c for buffer
  
  //intializing for loops to create the patterns
  for(i=1;i<=size;i++)  //main loop
  {
      for(j=1;j<=i;j++) //first loop
      {
        printf("%c",ch);
      }
      printf("\t");
      for(k=1;k<=i;k++) //second loop
      {
        printf("%c",ch);
      }
      printf("\t");
      for(l=1;l<=i;l++) //third loop
      {
        printf("%c",ch);
      }
      printf("\n");
  }
  getch();
}
