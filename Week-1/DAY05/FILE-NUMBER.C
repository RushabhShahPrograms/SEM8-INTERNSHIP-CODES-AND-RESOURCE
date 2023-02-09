/*
Author: Rushabh Shah
Date of Creation: 9th Feb 2023
Subject: To read and write the numbers in file
*/

#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp1,*fp2;
  int num,i;
  clrscr();
  
  fp1=fopen("even.txt","w");
  fp2=fopen("odd.txt","w");
  for(i=0;i<10;i++)
  {
    printf("\nEnter the number");
    scanf("%d",&num);
    if(num%2==0)
    {
      putw(num,fp1);
    }
    else
    {
      putw(num,fp2);
    }
  }
  fclose(fp1);
  fclose(fp2);
  fp1=fopen("even.txt","r");
  fp2=fopen("odd.txt","r");
  printf("\nThe even numbers are as follows: ");
  while(num=getw(fp1))!=EOF)
  {
    printf("%d\t",num);
  }
  fclose(fp1);
  printf("\n The odd numbers are as follows: ");
  while((num=getw(fp2))!=EOF)
  {
    printf("%d\t",num);
  }
  fclose(fp2);
  getch();
}
