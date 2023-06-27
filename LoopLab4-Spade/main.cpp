#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double speed = 0;
  double hours = 0;
  double distance = 0;

  cout << "Enter Speed:\n";
  cin >> speed;
  cout << "Enter Hours:\n";
  hours = 1;
  distance = speed * hours;
  // Note: cout<<setw(10)<<variable;  Will print
  // variable in a field 10 characters wide.

  cout << left; // left align all output
  // Print header in columns of size 10
  cout << setw(10) << "Hours" << setw(10) << "Distance" << endl;

  // finish the lab using a FOR LOOP
  while (hours <= 3) {
    cout << setw(10) << hours << setw(10) << distance<< endl;
    hours++;
    distance = speed * hours;
  }
}