/*
Author: Rushabh Shah
Date of Creation: 8th Feb 2023
Subject: Matrix Multiplication
*/

#include<stdio.h>
//#include<conio.h>
#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

void main()
{
    int a[ROW1][COL1], b[ROW2][COL2], c[ROW1][COL2]={0};
    int i,j,k;
    //clrscr();
    
    //Scanning First Matrix
    printf("Enter the values of First Matrix: \n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL1;j++)
        {
            printf("\nEnter the matrix a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    //Scanning Second Matrix
    printf("\n\nEnter the values of Second Matrix: \n");
    for(i=0;i<ROW2;i++)
    {
        for(j=0;j<COL2;j++)
        {
            printf("\nEnter the matrix b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    //Operation of multiplication
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL2;j++)
        {
            for(k=0;k<COL2;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    
    //Printing the multiplied matrix
    printf("\nMultiplied Matrix is: \n");
    for(i=0;i<ROW1;i++)
    {
        for(j=0;j<COL1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    //getch();
}
