#include<iostream>
using namespace std;
void discount(string);
main()
	{
	string name;
	cout <<"Enter the country's name(in lower case only):  ";
	cin >>name;	
	discount(name);
	}
void discount(string name)
	{
	int price;
	cout <<"Enter the ticket Price in dollars:  ";
	cin >>price;
	if (name == "pakistan")
		{
		cout <<"Final ticket price after 5% discount:  "<<float(price)*0.95;
		}
	else if (name == "ireland")
		{
		cout <<"Final ticket price after 10% discount:  "<<float(price)*0.90;
		}
	else if (name == "india")
		{
		cout <<"Final ticket price after 20% discount:  "<<float(price)*0.80;
		}
	else if (name == "england")
		{
		cout <<"Final ticket price after 30% discount:  "<<float(price)*0.70;
		}
	else if (name == "canada")
		{
		cout <<"Final ticket price after 45%  discount:  "<<float(price)*0.65;
		}
	else 
		{
		cout <<"Country name not found(make sure you have used only lower case characters)";
		}	
	}
	
	
