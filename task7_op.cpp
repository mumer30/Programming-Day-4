#include<iostream>
#include<windows.h>
using namespace std;
void print_maze();
void gotoxy(int x,int y);
main()
	{
	system("cls");
	print_maze();
	bool flag=true;
	int x=10,y=2;
	while(true)
		{
		while(y<=15)
			{
			if (y == 15)
				flag=false;
			if (y == 2)
				flag=true;
			gotoxy(x,y);
			cout <<"P"; 
			
			gotoxy(x,y);
			Sleep(200); 
			cout <<" ";
			if (flag)
				y+=1;
			else
				y-=1;						
			}
		}	
	}
void gotoxy(int x,int y)
	{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
void print_maze()
	{
	cout <<"############################################################"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"#                                                          #"<<endl;
	cout <<"###########################################################"<<endl;
	}
