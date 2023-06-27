#include <iostream>
using namespace std;

//Write the prototype(s) here
int add(int , int ); //Variable not required in prototype 
int subtract(int, int);
int multiply(int, int);
int divide(int, int);


int main() {
  
  double a=0,b=0;
  a=4;
  b=5;
  
  int answer = 0;
  
  //function Call
  answer = add(a,b);

  //print the results
  cout<<a<<" + "<<b<<" = " <<answer<<endl;
  
  //function call
  answer = subtract(a, b);
  
  //you code the other function calls here
  //answer = subtract()
  //.
  //.
  //.
  
  //print results
  //cout<<a<<" - "<<b<<" = " <<answer<<endl;
  cout<<a<<" - "<<b<<" = " <<answer<<endl;

  //multiplication
  answer = multiply(a, b);
  
  cout<<a<<" * "<<b<<" = " <<answer<<endl;

  //division
  answer = divide(a, b);
  
  cout<<a<<" / "<<b<<" = " <<answer<<endl;

  return 0;
  
}

//Function Definition: AFTER MAIN
int add(int num1, int num2)
{//start add

  return num1 + num2;
  
}//end add
int subtract(int num1, int num2)
{
  return num1 - num2;
}
int multiply(int num1, int num2)
{
  return num1 * num2;
}
int divide(int num1, int num2)
{
  return num1 / num2;
}