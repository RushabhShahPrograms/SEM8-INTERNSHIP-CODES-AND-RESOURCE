/*
Author: Rushabh Shah
Date of Creation: 8th Feb 2023
Subject: Binary Search
*/

#include <stdio.h>
//#include<conio.h>

void main()
{
    int a[30],temp,pass,i,j,size,mid,high,low,s_key;
    //clrscr();
    
    printf("Enter the size of table: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter the value for element[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter number which you want to search in table: ");
    scanf("%d",&s_key);
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter the Value for element[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter number which you want to search in table: ");
    scanf("%d",&s_key);
    
    low=0;
    high=size;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==s_key)
        {
            printf("\n The number is at location [%d]",mid+1);
            break;
        }
        else
        {
            if(s_key>a[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
        if(a[mid]!=s_key)
        {
            printf("\n[%d] is not found in table",s_key);
        }
        //getch();
}
