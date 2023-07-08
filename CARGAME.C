/* AUTHOR -- KUSHAL SURANA,DIVYANSHU DUBEY
   WORK--CANDY GAME */

#include<stdio.h> //STANDARD INPUT OUTPUT HEADER FILE
#include<conio.h> //CONSOLE INPUT OUTPUT HEADER FILE
void main(){
       int candyX=40,candyY=2,candy1X=20,candy1Y=2,candy2X=65,candy2Y=2;
       int boxX=40,boxY=22,score=0,lifeline=3,d=0;

       char ch;
       textbackground(CYAN);
       start:
       clrscr();
       gotoxy(60,5);
       textcolor(RED);
       cprintf("score=%d",score);
       gotoxy(60,6);
       cprintf("lifeline=%d",lifeline);
       gotoxy(candyX,candyY);
       textcolor(YELLOW);
       cprintf("000");
       gotoxy(candy1X,candy1Y);
       textcolor(YELLOW);
       cprintf("000");
       gotoxy(candy2X,candy2Y);
       textcolor(YELLOW);
       cprintf("000");
       gotoxy(boxX,boxY);
       textcolor(BLACK);
       cprintf("   <*>");
       gotoxy(boxX,boxY+1);
       textcolor(BLACK);
       cprintf("  |***|");
       gotoxy(boxX,boxY+2);
       textcolor(BLACK);
       cprintf(" |*****|");
       gotoxy(boxX,boxY+3);
       textcolor(BLACK);
       cprintf("<*******>");
       if(kbhit()){
	       ch=getch();
	       switch(ch){//ch is value here and getch holds screen after case a,d,j performed
		    case 'a': if(boxX>1){
			      boxX--;
			      }
			      break;
		    case 'A': if(boxX>1){
			      boxX--;
			      }
			      break;
		    case 'd':if(boxX<80){
			     boxX++;
			     }
			     break;
		    case 'D':if(boxX<80){;
			     boxX++;
			     }
			     break;
		    case 'x':exit(0);
		    case 'X':exit(0);
		    }//end of switch
		    }//end of if
		    candyY++;
		    if(candyY==22){
		    d=candyX-boxX;
		    if(d>=1 && d<=8){
		    sound(2000);
		    delay(300);
		    nosound();
		    lifeline--;
		    }else{
		    sound(2000);
		    delay(5);
		    nosound();
		    score++;

			 if(lifeline==0){
			     clrscr();
			     gotoxy(40,13);
			     textcolor(RED);
			     cprintf("GAME IS OVER");
			     sound(1000);
			     delay(500);
			     nosound();
			     getch();
			     exit(0);
		    }  }
		    candyY=2;
		    candyX=rand()%78+1;
d		    }

		    candy1Y++;
		    if(candy1Y==22){
		    d=candy1X-boxX;
		    if(d>=1 && d<=8){
		    sound(2000);
		    delay(100);
		    nosound();
		    lifeline--;
		    }else{
		    sound(2000);
		    delay(5);
		    nosound();
		    score++;

			 if(lifeline==0){
			     clrscr();
			     gotoxy(40,13);
			     textcolor(RED);
			     cprintf("GAME IS OVER");
			     sound(1000);
			     delay(500);
			     nosound();
			     getch();
			     exit(0);
		    }  }
		    candy1Y=2;
		    candy1X=rand()%78+1;
		    }

		    candy2Y++;
		    if(candy2Y==22){
		    d=candy2X-boxX;
		    if(d>=1 && d<=8){
		    sound(2000);
		    delay(100);
		    nosound();
		    lifeline--;
		    }else{
		    sound(2000);
		    delay(5);
		    nosound();
		    score++;

			 if(lifeline==0){
			     clrscr();
			     gotoxy(40,13);
			     textcolor(RED);
			     cprintf("GAME IS OVER");
			     sound(1000);
			     delay(5);
			     nosound();
			     getch();
			     exit(0);
		    }  }
		    candy2Y=2;
		    candy2X=rand()%78+1;
		    }
delay(70);
goto start;
}//end of main

