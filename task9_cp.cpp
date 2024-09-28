#include<iostream>
using namespace std;

void tpChecker(int,int);

main(){
	int people,tp;
	cout <<"Number of people in the household:  ";
	cin >> people;
	cout <<"Number of rolls of TP:  ";
	cin >> tp;
	tpChecker(people,tp);
	}

void tpChecker(int people,int tp){
	int use_per_day=people*57;
	int total_tp=tp*500;
	int days= total_tp/use_per_day;

	if (days>=14){
		cout <<"Your TP will last "<<days<<" days, no need to panic!"<<endl;
	}
	else{
		cout <<"Your TP will only last "<<days<<" days, buy more"<<endl;
	}
}		
			
