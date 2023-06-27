#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  double studyHours;

  cout << "Enter first name:";
  cin >> name;
  // write the statement to input the name from the keyboard to
  // the variable 'name'

  cout << endl;

  cout << "Enter study hours:";
  cin >> studyHours;
  // type the line to input the hours from the keyboard
  // into the variable 'hours'

  cout << endl;

  // make the output match the test
  cout <<"Hello, " << name << "! On Saturday, you need to study "<< studyHours<<" hours for the exam.";
  return 0;
}