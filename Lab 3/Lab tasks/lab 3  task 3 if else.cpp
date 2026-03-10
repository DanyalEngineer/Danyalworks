// Name: Danyal Hassan
// Reg No: BF25NWELE0750
#include <iostream>      
using namespace std;     

int main() 
{
    int a;              

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> a;           // Read the number from the user

    // Check whether the number is positive, negative, or zero
    if (a > 0)
        cout << "The number is positive" << endl;
    else if (a < 0)
        cout << "The number is negative" << endl;
    else
        cout << "The number you entered is zero" << endl;

    return 0;           // Program finished successfully
}