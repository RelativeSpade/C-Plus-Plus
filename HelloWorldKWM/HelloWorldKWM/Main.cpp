//Name:Spade
//Date: 1/20/23
//Program Description:This program
//will print hello world to the screen move to the next line and print Welcome to C++ and move to the next line and print I am happy you are here!


//iostream is used for input and output to the screen and keyboard
#include <iostream>
//use this to save typing
using namespace std;


int main() {
	//Program execution starts here

	//Print Hello World! to the screen and cursor remains on the current line
	cout << "Hello World!";//note the ;
	//all c++ programs end with ;
	cout << endl; //this is one way to move the cursor to the next line
	//\n inside "" will also move the cursor to the next line
	cout << "Welcome to C++\nI am happy you are here!"<<endl;

	//Pauses program until user presses a key
	system("PAUSE");
	//0 reports to the system that the program has completed sucessfully

	return 0;
}