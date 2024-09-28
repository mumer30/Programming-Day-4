#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void Player_move(int x,int y);
void print_maze();
main()
{
	system("cls");	
	int x=2,y=2;
	print_maze();
	while(true)
	{
		Player_move(x,y);	
		x++;
		if (x==15)
			x=2;
	}

}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void Player_move(int x,int y)
{
	gotoxy(x,y);
	cout <<"P";
	Sleep(100);
	gotoxy(x,y);
	cout <<" ";
}
void print_maze()
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
