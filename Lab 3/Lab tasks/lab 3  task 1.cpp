// Name: Danyal Hassan
// Reg No: BF25NWELE0750
#include <iostream>      
using namespace std;     

int main() 
{
    int a;              
    // Ask the user to enter an integer
    cout << "Please enter an integer: ";
    cin >> a;           // Read the number entered by the user

    // Check if the number is greater than 0 and less than 100
    if (a > 0 && a < 100)
        cout << "Condition met: the number is between 0 and 100" << endl;
    else
        cout << "Condition not met" << endl;  
		// Printed if the number is outside the range

    return 0;           
}