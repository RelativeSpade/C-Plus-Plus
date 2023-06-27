#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand(time(0));
  int num1 = 0;
  int num2;
  cout << "Enter a Number between 1-100!" << endl;
  cin >> num2;
  num1 = rand() % 100;
  if (num1 == num2) {
    cout << "Correct!" << endl;
    cout << "Randomised Number: " << num1 << endl;
    cout << "Guessed Number: " << num2 << endl;
  } else {
    cout << "Incorrect!" << endl;
    cout << "Randomised Number: " << num1 << endl;
    cout << "Guessed Number: " << num2 << endl;
  }
}