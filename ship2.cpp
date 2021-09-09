#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x, int y) 
{ 
 	COORD c = { x,y };  
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
}	

//delete Cursor
void setcursor(bool visible) 
{ 
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 
	CONSOLE_CURSOR_INFO lpCursor; 
	lpCursor.bVisible = visible; 
	lpCursor.dwSize = 20; 
	SetConsoleCursorInfo(console,&lpCursor); 
}

//color
void setcolor(int fg,int bg)
{ 
	HANDLE hConsole = 
	GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(hConsole, bg*16+fg); 
}	
	
// draw spaceship
void draw_ship(int x, int y)
{
	gotoxy(x,y);
	setcolor(2,4);
		printf(" <-0-> ");			
}

//delete spaceship
void eraseShip(int x, int y)
{
	gotoxy(x,y);
	setcolor(0,0);		
		printf("       ");	
}

// draw bullet
void drawbullet(int x, int y)
{
	gotoxy(x,y);
	setcolor(2,0);
		printf("^");			
}

//delete bullet
void erasebullet(int x, int y)
{
	gotoxy(x,y);
	setcolor(0,0);		
		printf(" ");
}

struct Ammo{
	int active = 0;
	int x = 0 , y = 0;
};


//move for spaceship		
int main() 
{ 
	
	Ammo ammo[5];
	//cursor
	setcursor(0);
	char ch=' '; 
	int x = 38,y = 29;
	int press = 0;
	draw_ship(x,y); 
	do { 
 		if (_kbhit())
		 	{ 
 			ch=_getch(); 
 			if(ch=='a'&& x > 0)  {press = 1;}
 			if(ch=='d'&& x < 73) {press = 2;}
 			if(ch=='s'&& y > 0)  {press = 3;}   
 			if(ch==' ')  { 
			 for (int i = 0; i < 5; i++)
			 {
			 	if(ammo[i].active == 0)
				 {
			 		ammo[i].active = 1;
			 		ammo[i].x = x + 3;
			 		ammo[i].y = 28;
			 		break;
				 }
			 }
		}
		
 		fflush(stdin); 	
	 }	 
	 
		 for (int i = 0; i < 5; i++){
		 if (ammo[i].active == 1){erasebullet(ammo[i].x , ammo[i].y);}
		 if (ammo[i].y > 0){drawbullet(ammo[i].x , --ammo[i].y);}
		 else{ammo[i].active = 0;}
		 }
	 
	 	if(press == 1 && x > 0)
		 {
	 		eraseShip(x,y);
	 		draw_ship(--x,y);
		 }
		if(press == 2 && x < 73)
		 {	
	 		eraseShip(x,y);
	 		draw_ship(++x,y);
		 }
		 if(press == 3)
		 {
	 		eraseShip(x,y);
	 		draw_ship(x,y);
		 }
		 
	 
 	Sleep(100);
	} while (ch != 'x'); 
	return 0; 
}
