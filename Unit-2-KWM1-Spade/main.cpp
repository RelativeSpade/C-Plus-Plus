#include <iostream>
//use line 3 for the string data type
#include <string>
using namespace std;
int main() {

  string firstName;
  string noun, verb;

  cout<<"Enter your first name:\n";
  cin>>firstName;

  cout<<"Enter a noun:\n";
  cin>>noun;

  cout<<"Enter a verb:\n";
  cin>>verb;
  
  cout<<"My name is "<<firstName<<"\nI like to "<<verb<<"\n"<<"as I get closer to "<<noun;
 return 0;
}