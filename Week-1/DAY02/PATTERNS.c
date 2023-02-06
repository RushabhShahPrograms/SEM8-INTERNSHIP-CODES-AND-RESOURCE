/*
Author: Rushabh Shah
Date of Creation: 6th Feb 2023
Subject: Create the patterns by using the loop statements

*
**
***
****

*/

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,row,k;
  char ch;
  clrscr();
  printf("\nEnter the number of row: ");
  scanf("%d",&row);
  printf("\nEnter the character you want to print: ");
  scanf("%c",&ch);
  
  for(k=1;k<=3;k++)
  {
    for(i=1;i<=row;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("%c",ch);
      }
      printf("\n");
    }
    printf("\n");
  }
  getch();
}



/* 
Output of the code ->
Enter the number of row: 3
Enter the character you want to print: $

$
$$
$$$

$
$$
$$$

$
$$
$$$

*/
