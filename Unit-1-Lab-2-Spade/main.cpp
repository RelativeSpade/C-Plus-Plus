//Unit 1 Lab 2
// PUT YOUR NAME HERE:
// This program contains many syntax errors and will not compile.
 // Fix the errors so that it correctly finds the sum of two numbers entered by the user.

//USE THE Check mark on the left to check your solution
 
 #include <iostream>
 using namespace std;
 
 int main(){
//Declare variables
   int num1 = 0;
   int num2 = 0;
   int val = 0;
   
  //prompt the user for two numbers
  cout<<"Enter two numbers and I will calculate and print the sum\n";
  //input the two numbers respectively 
  cout<<"Enter number 1:"<<endl;
  cin>>num1;
  cout<<"Enter number 2:"<<endl;
  cin>>num2;

  //calculate the sum of the two numbers   
  val = num1+num2;
  cout<<num1<<" + "<<num2<<" = "<<val;
  //display the two numbers and the su
  //indicates the program completed successfully
   return 0;
 }