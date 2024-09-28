#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
main()
	{
	system("cls");
	gotoxy(100,40);
	cout <<"Umer";	
	gotoxy(0,80);

	}
void gotoxy(int x,int y)
	{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
