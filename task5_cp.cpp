#include<iostream>
using namespace std;
void possible_bonus(int,int);
main()
	{
	int your_position,friend_position;
	cout <<"Enter your position: ";
	cin >>your_position;
	cout <<"Enter your position: ";
	cin >>friend_position;
	possible_bonus(your_position,friend_position); 
	}
void possible_bonus(int your_position,int friend_position)
	{
	if ((your_position + 6) > friend_position)
		{
		cout <<"true";
		}
	else
		{
		cout <<"false";
		}
	}   