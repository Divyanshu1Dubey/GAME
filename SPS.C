		 /* AUTHOR - DIVYANSHU DUBEY
		      DATE - 21/06/2023
		      WORK - GAME DEVELOPMENT */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){
int choice,self=0,computer=0,i,rounds,num;
    clrscr();
      printf("\nenter 1 for stone ");
      printf("\nenter 2 for paper ");
      printf("\nenter 3 for scissor ");
      printf("\nenter no. of rounds to play ");
      scanf("%d",&rounds);
      for(i=1;i<=rounds;i++)
      {
      textbackground(GREEN);
	printf("\nenter your choice= ");
	scanf("%d",&choice);
	 num=(rand()%3)+1;
	 if(choice==num)
	 {
	 textcolor(CYAN);
	 cprintf("\nboth choose same try again");
	 sound(2000);
	 delay(800);
	 nosound();
	 }
	 else if(choice==1 && num==2)
	 {
	  printf("\n you choose rock and computer choose paper");
	  textcolor(RED);
	  cprintf("\ncomputer won");
	  computer++;
	  sound(4000);
	  delay(300);
	  nosound();
	  }
	  else if(choice==1 && num==3)
	 {
	  printf("\n you choose rock and computer choose scisor");
	  textcolor(YELLOW);
	  cprintf("\nyou won");
	  self++;
	  sound(1000);
	  delay(100);
	  nosound();
	  }
	  else if(choice==2 && num==1)
	 {
	  printf("\n you choose rock and computer choose paper");
	  textcolor(CYAN);
	  cprintf("\nyou won");
	  self++;
	  sound(1000);
	  delay(100);
	  nosound();
	  }
	  else if(choice==2 && num==3)
	 {
	  printf("\n you choose paper and computer choose scisor");
	  textcolor(RED);
	  cprintf("\ncomputer won");
	  computer++;
	  sound(4000);
	  delay(300);
	  nosound();
	  }
	  else if(choice==3 && num==1)
	 {
	  printf("\n you choose scisor and computer choose stone");
	  textcolor(RED);
	  cprintf("\ncomputer won");
	  computer++;
	  sound(4000);
	  delay(300);
	  nosound();
	  }
	  else if(choice==3 && num==2)
	 {
	  printf("\n you choose scisor and computer choose paper");
	  textcolor(CYAN);
	  cprintf("\nyou won");
	  self++;
	  sound(1000);
	  delay(100);
	  nosound();
	  }
	  }
	  printf("\n your score is %d",self);
	  printf("\ncomputer score is %d",computer);
	  if(self==computer)
	  {
	  printf("\n it is tie");
	  }
	  else if(self>computer)
	  {
	  printf("\n you are the winner of your game");
	  }
	  else
	  {
	  clrscr();
	  gotoxy(27,15);
	  textcolor(WHITE);
	  cprintf("\ncomputer is winner of this game");
	  }

      getch();

	       }