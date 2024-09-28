#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_name(char);
main()
	{
	string name="HASSAN";
	system("cls");
	int x=0,y;
	for(y=0;y<=6;y++)
		{
		gotoxy(x,y);
		print_name(name[y]);
		} 
	}

void gotoxy(int x,int y)
	{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
void print_name(char character)
	{
	cout <<character;
	}
