#include<iostream>
using namespace std;
void check_speed(int);
main()
	{
	int speed;
	cout <<"Speed: ";
	cin >>speed;
	check_speed(speed); 
	}
void check_speed(int speed)
	{
	if (speed >100)
		{
		cout <<"Halt... YOU WILL BE CHALLANED!!!";
		}
	else
		{
		cout <<"Perfect! You're going good.";
		}
	}   