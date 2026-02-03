/* John Thomas Mathison 
CSCI 2000
February 3, 2026
This program will check if you can vote or not*/

#include <iostream>
using namespace std; 


int main()
{
  

	int age; 
	int citizen; // 1 for yes, 0 for no 

	cout << "How old are you? " << endl; 
	cin >> age; 
	cout << "Are you a citizen? " << endl; 
	cin >> citizen; 

	if (age >= 18 and citizen == 1)
	{
		cout << "You are eligible to vote. " << endl; 

	}
	else if (age >= 18 and citizen != 1)
	{
		cout << "You must be a citizen to vote. " << endl; 

	}
	else
	{
		cout << "You are not old enough to vote." << endl; 
	}
	return 0; 








}
