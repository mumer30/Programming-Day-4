#include<iostream>
using namespace std;
void flower_shop(float,float,float);
main()
	{
	float red_rose,white_rose,tulips;
	cout <<"Red Rose: ";
	cin >>red_rose;
	cout <<"White Rose: ";
	cin >>white_rose;
	cout <<"Tulips: ";
	cin >>tulips;
	flower_shop(red_rose,white_rose,tulips);
	}
void flower_shop(float red_rose,float white_rose,float tulips)
	{
	float orignal_price=(red_rose*2.0)+(white_rose*4.10)+(tulips*2.50);
	cout <<"Orignal Price: "<<orignal_price <<endl;
	if (orignal_price > 200)
		{
		cout <<"Price after discount: "<<(orignal_price*0.80);
		}
	else 
		{
		cout <<"Price after discount: "<<(orignal_price);
		}
	}