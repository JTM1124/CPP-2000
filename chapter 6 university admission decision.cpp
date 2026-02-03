/* John Thomas Mathison 
CSCI 2000
February 3, 2026
This program will find out if you get into school or not.*/



#include <iostream>
using namespace std; 


int main()
{
   
	int grade; 
	double entrance_score; 
	int sports_quota; 

	cout << "Input your overall grades." << endl; 
	cin >> grade; 
	cout << "Input your entrance exam score." << endl; 
	cin >> entrance_score; 
	cout << "Are you an athlete? " << endl; 
	cin >> sports_quota; 

	
	if (grade >= 85 and entrance_score >= 80)

	{
		cout << "Admission in Honors Program." << endl;
	}

	else if (grade >= 70 and entrance_score >= 60)
	{
		cout << "Admission in Regular Program." << endl; 
	}

	else if (grade >= 60 and sports_quota == 1)
	{
		cout << "Admission under sports program." << endl; 
	}
	
	
	else
	{
		cout << "Application Rejected" << endl; 
	}

	return 0; 

	}










