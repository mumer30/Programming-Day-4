#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
	int x=85,y=20;
	system("cls");
	gotoxy(x,y);
	cout <<"##    ##  ###    ##  #####  ####    "<<endl;
	gotoxy(x,y+1);
	cout <<"##    ##  ## # # ##  #      #   #   "<<endl;
	gotoxy(x,y+2);
	cout <<"##    ##  ##  #  ##  #####  ####    "<<endl;
	gotoxy(x,y+3);
	cout <<"##    ##  ##     ##  #      #  #    "<<endl;
	gotoxy(x,y+4);
	cout <<"##    ##  ##     ##  #      #   #   "<<endl;
	gotoxy(x,y+5);
	cout <<" ######   ##     ##  #####  #    #  "<<endl;
	gotoxy(0,30);

}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
