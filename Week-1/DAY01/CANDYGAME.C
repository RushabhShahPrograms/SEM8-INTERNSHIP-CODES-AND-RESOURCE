/*
Author: Rushabh Shah
Creation of Date: 6th Feb 2023
Subject: To create the candy game using C language

'0' is the symbol of candy
'#      #'
 ########    is the symbol of basket

*/
#include<stdio.h>
#include<conio.h>

void main()
{
  //initialize values
  int candyY=5,candyX=40,boxX4=,boxY=14,score=0,lifeline=3,d;
  char ch;
  
  textbackground(BLUE);  //changing background to blue color
  start:
  clrcscr();
  
  //displaying score on the screen at specific area
  gotoxy(60,5); 
  cprintf("Score=%d",score);
  
  //displaying lifeline on the screen at specifice area
  gotoxy(60,6);
  cprintf("Lifeline=%d",lifeline);
  
  //initializing the candy and changing the color yellow to it
  gotoxy(candyX,candyY);
  textcolor(YELLOW);
  cprintf("0");
  
  //initializing the basket and changing the color cyan to it
  gotoxy(boxX,boxY);
  textcolor(CYAN);
  cprintf("#");
  gotoxy(boxX+7,boxY);
  cprintf("#");
  gotoxy(boxX,boxY+1);
  cprintf("########");
  
  //assiging the buttons 'A' and 'D' for the movement of basket
  if(kbhit())
  {
    ch=getch();
    switch(ch)
    {
      case 'a':if(boxX>1)
      {
        boxX--;
      }
      break;
      case 'A':if(boxX>1)
      {
        boxX--;
      }
      break;
      case 'd':if(boxX<73)
      {
        boxX++;
      }
      break;
      case 'D':if(boxX>73)
      {
        boxX++;
      }
      break;
      case 'x':exit(0);
    }
  }
  candyY++;
  if(candyY==14)
  {
    d=candyX-boxX;
    
    //increase in score if candy hit the basket
    if(d>=1 && d<=6)
    {
      score++;
    }
    else
    {
      
      //decrement in lifeline if candy doesnot hit the basket
      lifeline--;
      if(lifeline==0)
      {
        clrscr();
        gotoxy(40,13);
        textcolor(RED);
        sound(200); //sound is in hertz changing the value will change the pitch of the sound
        delay(200);
        nosound(); //use to stop the sound after the completion of delay
        cprintf("GAME OVER");
        getch();
        exit(0);
      }
    }
    
    //random function is use to make candy fall from different positions from top.
    candyY=1;
    candyX=rand()%80+1;
  }
  delay(200);
  goto start;
}
