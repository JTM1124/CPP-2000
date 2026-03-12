/* John Thomas Mathison 
CSCI 2000
10 March 2026*/

#include <iostream> 
using namespace std; 

int main()
{

	int capacity; 
	int stops; 
	int violations=0;
	int passenger; 
	int current_load = 0; 
	int streak = 0; 
	int longest_streak=0; 
	int maximum_occupancy = 0; 

	cout << "Enter the bus capacity: " << endl; 
	cin >> capacity; 
	cout << "Enter number of stops: " << endl; 
	cin >> stops; 
	cout << endl; 
	cout << "Enter the passenger change at each stop (+ boarding, - leaving): " << endl;

	for (int count = 1; count <= stops; count++)
	{
		cout << "Stop " << count << ": ";
		cin >> passenger; 
		current_load = current_load + passenger; 
		while (current_load < 0)
		{
			cout << "error, cannot go below zero" << endl; 
			cout << "input a new number" << endl; 
			current_load = current_load - passenger; 
			cin >> passenger; 
		}
		if (current_load > capacity)
		{
			violations = violations + 1; 
			cout << "Violation" << endl; 
			streak = 0; 
		}
		else if (current_load <= capacity)
		{
			streak = streak + 1; 
		}
		if (longest_streak < streak)
		{
			longest_streak = streak; 
		}
		if (maximum_occupancy < current_load)
		{
			maximum_occupancy = current_load;
		}
	}

	cout << "=== Trip Summary ===" << endl; 
	cout << "Maximum occupancy: " << maximum_occupancy << endl; 
	cout << "Number of violations: " << violations << endl; 
	cout << "Longest safe streak: " << longest_streak << endl; 
	

	return 0; 
}