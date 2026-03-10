#include <iostream>            
using namespace std;               

int main()
{                    
	
	int a;                      
	// variable declaration
	
	cout<<"enter an integer ";     
	// prompt for user to input data
	cin>>a;                           
	// takes data from user and puts it into the variable
	
	if(a>0 && a<100)                    
	// condition for the program to cheak a number is greater than 0 and less than 100
	cout<<"condition met between 0 and 100"<<endl;  
	
	else                                              
	// part that runs if the if condition fails
	cout<<"condition not met"<<endl;         
	
	return 0;   
}