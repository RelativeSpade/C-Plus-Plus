#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand(time(0));
  int num1 = 0;
  int num2;
  int counter = 0;
  cout << "Enter a Number between 1-100!" << endl;
  cin >> num2;
  num1 = rand() % 10;
  while (num1 != num2) {
    
    if(num2 < num1)
      cout << "to low!" << endl;
    if(num1 < num2)
      cout<<"To high"<<endl;
    counter++;
    cin >> num2;
  }
  if (num1 == num2) {
    cout << "Correct!" << endl;
    cout << "Randomised Number: " << num1 << endl;
    cout << "Guessed Number: " << num2 << endl;
    cout << "Guesses: " << counter << endl;
  }
}