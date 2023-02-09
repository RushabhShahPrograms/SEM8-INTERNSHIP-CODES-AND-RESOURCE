#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  char name[10];
  char data[30];
  char temp[30];
  clrscr();
  printf("\nEnter the file you want to create: ");
  scanf("%s",name);
  fp=fopen(name,"w"); //write mode "w", read mode "r", a, w+, r+, a+
  printf("\nEnter the data you want to enter: ");
  scanf("%s",data);
  //gets(data) used for scanning/enter the prargraph
  fprintf(fp,"%s",data);
  fclose(fp);
  fp=fopen(name,"r");
  fscanf(fp,"%s",temp);
  printf("\nThe content of the files are: ");
  printf("%s",temp);
  getch();
}
