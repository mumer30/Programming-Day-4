#include<iostream>
#include<windows.h>
using namespace std;
void Print_maze();
void gotoxy(int x,int y);
main()
{
	system("cls");
	Print_maze();
	gotoxy(3,4);
	cout <<"P";
	gotoxy(0,20);

}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void Print_maze()
{
	cout <<"#############################"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#                           #"<<endl;
	cout <<"#############################"<<endl;
}
