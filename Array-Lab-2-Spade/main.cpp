#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// 1. Write the setData function to prompt for first name,
// last name, test 1 and test 2 for each student
void setData(string fName[], string lName[], double t1[], double t2[],
             int count) {
  for (int i = 0; i < count; i++) {
    cout << "Enter first name:\n";
    cin >> fName[i];
    cout << "Enter last name:" << endl;
    cin >> lName[i];
    cout << "Enter test 1:" << endl;
    cin >> t1[i];
    cout << "Enter test 2:" << endl;
    cin >> t2[i];
  }
}
// Calculate the average of test 1 and test 2.
// store the average in a average array
void calculateAverage(double t1[], double t2[], double avg[], int count) {
  for (int i = 0; i < count; i++) {
    avg[i] = ((t1[i] + t2[i]) / 2);
  }
}

void print(string pfirstName[], string plastName[], double paverage[],
           int psize) {

  // I got you on this!
  cout << setw(12) << "Last Name" << setw(12) << "First Name" << setw(10)
       << "Average" << endl;
  for (int i = 0; i < psize; i++) {
    cout << setw(12) << plastName[i] << setw(12) << pfirstName[i] << setw(10)
         << paverage[i] << endl;
  }
}
int main() {
  const int SIZE = 3;
  int count = 1;
  // delcare array firstName, lastName as string arrays size 2.
  string firstName[3];
  string lastName[3];
  // declare array test1, test2, average of type double size 2
  double test1[3];
  double test2[3];
  double average[3];

  // formatting purposes
  cout << setprecision(2) << fixed << showpoint;
  // cal setData
  setData(firstName, lastName, test1, test2, SIZE);

  // call calculateAverage
  calculateAverage(test1, test2, average, SIZE);
  // call print
  print(firstName, lastName, average, SIZE);
  // hit the check mark to check the output
  count++;
  return 0;
}