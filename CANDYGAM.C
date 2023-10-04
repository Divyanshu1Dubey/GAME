/* AUTHOR -- DIVYANSHU DUBEY
   WORK--CANDY GAME */

#include<stdio.h> //STANDARD INPUT OUTPUT HEADER FILE
#include<conio.h> //CONSOLE INPUT OUTPUT HEADER FILE
void main(){
       int candyX=40,candyY=2,boxX=40,boxY=22,score=0,lifeline=3,d=0;

       char ch;
       textbackground(BLUE);
       start:
       clrscr();
       gotoxy(60,5);
       cprintf("score=%d",score);
       gotoxy(60,6);
       cprintf("lifeline=%d",lifeline);
       gotoxy(candyX,candyY);
       textcolor(YELLOW);
       cprintf("0");
       gotoxy(boxX,boxY);
       cprintf("#");
       gotoxy(boxX+7,boxY);
       cprintf("#");
       gotoxy(boxX,boxY+1);
       cprintf("########");
       if(kbhit()){
	       ch=getch();
	       switch(ch){//ch is value here and getch holds screen after case a,d,j performed
		    case 'a': if(boxX>1){
		    boxX--;
		    }
		    break;
		    case 'd':if(boxX>1){

		    boxX++;
		    }

		      break;
		    case 'D':boxX++;
			   break;
		    case 'x':exit(0);
		    case 'X':exit(0);
		    }//end of switch
		    }//end of if
		    candyY++;
		    if(candyY==22){
		    d=candyX-boxX;
		    if(d>=1 && d<=6){
		     sound(2000);
		    delay(200);
		    nosound();
		      score++;
		    }else{
		     sound(2000);
		    delay(500);
		    nosound();
			 lifeline--;
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
		    }


		    }
		    candyY=2;
		     candyX=rand()%80+1;
}
delay(250);
goto start;
}//end of main

<!DOCTYPE html>
<html>
<head>
  <title>Login Page</title>
  <style>
    /* Add any CSS styling you need here */
    body {
      font-family: Arial, sans-serif;
      text-align: center;
      padding: 50px;
    }
    .login-container {
      max-width: 300px;
      margin: 0 auto;
      padding: 20px;
      border: 1px solid #ccc;
      border-radius: 5px;
    }
    input[type="text"], input[type="password"] {
      width: 100%;
      padding: 10px;
      margin: 5px 0 20px 0;
      display: inline-block;
      border: 1px solid #ccc;
      box-sizing: border-box;
    }
  </style>
</head>
<body>
  <div class="login-container">
    <h2>Login</h2>
    <form action="#" method="post">
      <label for="username">Username:</label><br>
      <input type="text" id="username" name="username"><br>
      <label for="password">Password:</label><br>
      <input type="password" id="password" name="password"><br><br>
      <input type="submit" value="Login">
    </form>
  </div>
</body>
</html>

