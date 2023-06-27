//This program will set the following variables
/*
  num1 = 75.35;
	num2 = -35.56
	num3 = 15.76
The program will then calculate the average
Then the program will print the three numbers and average. 
*/
#include <iostream>

using namespace std; 

int main()
{
	double num1; //declare num1 to store a decimal number
  double num2; //declare num2 to store a decimal number 
  double num3; //declare num3 to store a decimal number
  double average;//declare average to store a decimal number
  double total;
  //assign a number to the variables.
  num1 = 75.35;
  cout<<"num1 = "<<num1;
  cout<<endl;
	num2 = -35.56;
  cout<<"num2 = "<<num2;
  cout<<endl;
	num3 = 15.76;
  cout<<"num3 = "<<num3;
  cout<<endl;
  //Calculate the average:  
  total = num1+num2+num3;
  average = total/3;
  cout<<"average = "<<average;
  //Display the results

	return 0;
}