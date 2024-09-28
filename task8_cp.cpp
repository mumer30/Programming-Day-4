#include<iostream>
using namespace std;

void pet(int);

main()
	{
	int holiday;
	cout <<"Holidays: ";
	cin >>holiday;
	pet(holiday);
    }

void pet(int holiday)
	{
	int hour,min;
	int working_days=365-holiday;
	int time_for_games=(working_days*63)+(holiday*127);
	int time_diff=30000-time_for_games;
	if (time_diff >= 0)
		{
			hour=time_diff/60;
			min=time_diff-(hour*60);		
			cout <<"Tom sleeps Well"<<endl;
			cout <<hour<<" hours and "<<min <<" minutes left for play"<<endl;
		}
	else
		{
		time_diff*=-1;
		hour=time_diff/60;
		min=time_diff-(hour*60);	
		cout <<"Tom will run away"<<endl;
		cout <<hour<<" hours and "<<min <<" minutes for play"<<endl;
		}
	}
		
		
			
			
