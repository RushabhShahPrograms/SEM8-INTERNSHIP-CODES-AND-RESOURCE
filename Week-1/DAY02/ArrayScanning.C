/*
Author: Rushabh Shah
Date of Creation: 7th Feb
Subject: To understand the loops and array
*/

#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2

void main()
{
    int a[ROW],i,j;
    int b[ROW][COL];
    clrscr();
    for(i=0;i<ROW;i++)
    {
        printf("\nEnter the value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nThe single dimension array is\n");
    for(i=0;i<ROW;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe Two Dimension array is\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    getch();
}
