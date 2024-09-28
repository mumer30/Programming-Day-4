#include<iostream>
#include<windows.h>
using namespace std;
void print_menu();
void calculate_aggregrate(string,int,int,int);
void compareMarks(string,int,string,int);
main()
	{
	string name1,name2;
	int matric1,matric2,inter1,inter2,ecat1,ecat2;
	system("cls");
	print_menu();

	cout <<"Enter Name of Student 1:  ";
	cin >>name1;
	cout <<"Enter Matric marks of Student 1:  ";
	cin >>matric1;
	cout <<"Enter Inter marks of Student 1:  ";
	cin >>inter1;
	cout <<"Enter Ecat marks of Student 1:  ";
	cin >>ecat1;
	calculate_aggregrate(name1,matric1,inter1,ecat1);
	cout <<"\n ";
	cout <<"Enter Name of Student 2:  ";
	cin >>name2;
	cout <<"Enter Matric marks of Student 2:  ";
	cin >>matric2;
	cout <<"Enter Inter marks of Student 2:  ";
	cin >>inter2;
	cout <<"Enter Ecat marks of Student 2:  ";
	cin >>ecat2;
	
	calculate_aggregrate(name2,matric2,inter2,ecat2);
	cout <<"\n ";
	compareMarks(name1,ecat1,name2,ecat2);

	}
void print_menu()
	{
	cout <<"*******************************************************"<<endl;
	cout <<"*******************************************************"<<endl;
	cout <<"******UNIVERSITY****ADMISSION****MANAGEMENT************"<<endl;
	cout <<"*******************************************************"<<endl;
	cout <<"*******************************************************"<<endl;
	cout <<"********************SYSTEM*****************************"<<endl;
	cout <<"*******************************************************"<<endl;
	cout <<"*******************************************************"<<endl;
	}
void calculate_aggregrate(string name,int matric,int inter,int ecat)
	{
	float aggregrate=0;
	aggregrate=(matric*0.30)/1100+(inter*0.30)/560+(ecat*0.40)/400;
	cout <<"Aggregrate:  "<<100*aggregrate<<endl;
	}
	
	void compareMarks(string name1,int ecat1,string name2,int ecat2)
	{
	if (ecat1>ecat2)
		{
		cout <<"Ecat marks of " <<name1 <<" are greater than " << name2 <<" "  <<endl;
		}
	else
		{
		 cout <<"Ecat marks of " <<name2 <<" are greater than " << name1 <<" "  <<endl;
		}
	}	
