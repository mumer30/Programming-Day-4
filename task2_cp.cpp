#include<iostream>
using namespace std;
void Reverse(string);
main()
	{
	string state;
	cout <<"Enter 'true' or 'false' :";
	cin >>state;
	Reverse(state);
	}
void Reverse(string state)
	{
	if (state == "true")
		{
		cout <<"false";
		}
	else if (state == "false")
		{
		cout <<"true";
		}
	else
		{
		cout <<"Invalid Input";	
		}	
	}


