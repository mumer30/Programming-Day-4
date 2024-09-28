#include<iostream>
using namespace std;
void longest_time(int,int);
main()
	{
	int hour,min;
	cout <<"Enter the number of Hours:  ";
	cin >> hour;
	cout <<"Enter the number of Minutes:  ";
	cin >> min;
	longest_time(hour,min);
	}

void longest_time(int hour,int min)
	{
	if ((hour*60) > min)
		{
		cout <<hour;
		}
	else
		{
		cout <<min;
		}
	}