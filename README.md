/* John Thomas Mathison
CSCI 2000
January 29, 2026
This program will create a mini quiz*/ 


#include <iostream>
using namespace std; 


int main()
{
    
    int answer1;
    int answer2; 
    int answer3;

    cout << "What is sin(0)?" << endl; 
    cin >> answer1;

    if (answer1 == 0)
    {
        cout << "What is cos(0)?" << endl; 
        cin >> answer2; 
        if (answer2 == 1)
        {
            cout << "What is the cos(pi)?"  << endl; 
                cin >> answer3;
            if (answer3== -1)
            {
                cout << "You Win" << endl; 
            }
        }
    }
    else
    {
        cout << "Game Over" << endl; 
    }


    return 0; 




}
